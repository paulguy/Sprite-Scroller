/*
 * Copyright 2015 Paul L <paulguy119@gmail.com>
 * 
 * This file is part of Sprite Scroller.
 *
 * Sprite Scroler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sprite Scroller is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Sprite Scroller.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <pebble.h>
#include "sprite.h"
#include "spritelist.h" // must be after sprite.h
#include "bitmap.h"

// Comment to disable all debug/profile features.
//#define DEVELOPER

// TODO: Battery/bluetooth readout.
// TODO: Date readout.

typedef struct {
  int daymin;
  GColor color;
} BGChange;

// 0 must be specified
BGChange bgchanges[] = {
  {0,    ((GColor8)((uint8_t)0b11000001))},
  {300,  ((GColor8)((uint8_t)0b11010001))}, // 5
  {330,  ((GColor8)((uint8_t)0b11100001))}, // 5:30
  {360,  ((GColor8)((uint8_t)0b11111001))}, // 6
  {420,  ((GColor8)((uint8_t)0b11111100))}, // 7
  {480,  ((GColor8)((uint8_t)0b11001111))}, // 8
  {540,  ((GColor8)((uint8_t)0b11001011))}, // 9
  {1140, ((GColor8)((uint8_t)0b11010111))}, // 19
  {1200, ((GColor8)((uint8_t)0b11010010))}, // 20
  {1260, ((GColor8)((uint8_t)0b11000001))}  // 21
};
#define BGCHANGENUM (sizeof(bgchanges) / sizeof(BGChange))

#define MINSINDAY (60 * 24)
#define SCREENWIDTH (144)
#define SCREENHEIGHT (168)

#define BATT_MED_LEVEL (20)
#define BATT_HIGH_LEVEL (65)
#define BATT_FULL_LEVEL (90)

#ifdef DEVELOPER
// Comment to run in normal mode.  Uncomment and change to set a starting time
// for preview.  In this mode, time can also be changed at runtime with emulated
// taps in the x- and x+ direction, and does not respond to real time at all.
#define FORCESTARTAT (1400)
// How much the screen will step in preview mode.
#define PREVIEWSTEP (36)
// Uncomment to report draw time and free heap.
#define PROFILING
#endif

// this doesn't check whether the values make sense...
#define RANGE_TEST(S1, E1, S2, E2) (!(S2 > E1 || E2 < S1))

Window *mainwindow;
Layer *screen;
GBitmap *bg;
GBitmap *pointergfx;
GBitmap *status;
GBitmap *weekdays[7];
GBitmap *numbers[10];
GBitmap *batteries[4];
GBitmap *bluetooth;

int daymin;
int day;
int weekday;
int battlife;
bool btstatus;

void update_time() {
  time_t start;
  struct tm *t;

  start = time(NULL);
  t = localtime(&start);
  day = t->tm_mday;
  weekday = t->tm_wday;
  battlife = battery_state_service_peek().charge_percent;
  btstatus = connection_service_peek_pebble_app_connection();

#ifdef FORCESTARTAT
  daymin = FORCESTARTAT;
#else
  daymin = (t->tm_hour * 60) + t->tm_min;
#endif
}

#ifdef FORCESTARTAT
void advance_time_manually(AccelAxisType axis, int32_t direction) {
  if(axis == ACCEL_AXIS_X) {
    if(direction > 0) {
      daymin += PREVIEWSTEP;
      if(daymin >= 1440)
        daymin -= 1440;
    } else {
      daymin -= PREVIEWSTEP;
      if(daymin < 0)
        daymin += 1440;
    }
  }
  layer_mark_dirty(screen);
}
#else
void handle_tick(struct tm *tick_time, TimeUnits units_changed) {
  update_time();
  layer_mark_dirty(screen);
}
#endif

void update_window_color() {
  unsigned int i;
  
  for(i = 0; i < BGCHANGENUM - 1; i++) {
    if(daymin >= bgchanges[i].daymin && daymin < bgchanges[i+1].daymin) {
      window_set_background_color(mainwindow, bgchanges[i].color);
      return;
    }
  }
  
  window_set_background_color(mainwindow, bgchanges[BGCHANGENUM - 1].color);
}

void draw_full(Layer *layer, GContext *ctx) {
  unsigned int i;
  int realdaymin;

#ifdef FORCESTARTAT
  APP_LOG(APP_LOG_LEVEL_DEBUG, "%d", daymin);
#endif
  
  realdaymin = daymin - (SCREENWIDTH / 2);
  if(realdaymin < 0)
    realdaymin = MINSINDAY + realdaymin;  

  graphics_context_set_compositing_mode(ctx, GCompOpSet);
  update_window_color();
  
#ifdef PROFILING
  int start, startms, end, endms;

  start = time(NULL);
  startms = time_ms(NULL, NULL);
#endif

  // fill the screen with background graphic
  for(i = 0; i < SCREENWIDTH / 32 + 1; i++) {
    graphics_draw_bitmap_in_rect(ctx, bg, GRect(i * 32, 0, 32, 101));
  }

  if(realdaymin <= MINSINDAY - SCREENWIDTH) {
    for(i = 0; i < SPRITECOUNT; i++) {
      // Consider sprites that wrap around past the end of a day.
      if(spritelist[i].rect.origin.x + spritelist[i].rect.size.w > MINSINDAY) {
        if(RANGE_TEST(realdaymin,
                      realdaymin + SCREENWIDTH,
                      spritelist[i].rect.origin.x - MINSINDAY,
                      spritelist[i].rect.origin.x - MINSINDAY + spritelist[i].rect.size.w)) {
          graphics_draw_bitmap_in_rect(ctx, bitmap_get(spritelist[i].res),
                                       GRect(spritelist[i].rect.origin.x - MINSINDAY - realdaymin,
                                             spritelist[i].rect.origin.y,
                                             spritelist[i].rect.size.w,
                                             spritelist[i].rect.size.h));
        }        
      }
      if(RANGE_TEST(realdaymin,
                    realdaymin + SCREENWIDTH,
                    spritelist[i].rect.origin.x,
                    spritelist[i].rect.origin.x + spritelist[i].rect.size.w)) {
        graphics_draw_bitmap_in_rect(ctx, bitmap_get(spritelist[i].res),
                                     GRect(spritelist[i].rect.origin.x - realdaymin,
                                           spritelist[i].rect.origin.y,
                                           spritelist[i].rect.size.w,
                                           spritelist[i].rect.size.h));
      }
    }
  } else {
    for(i = 0; i < SPRITECOUNT; i++) {
      if(RANGE_TEST(realdaymin,
                    MINSINDAY,
                    spritelist[i].rect.origin.x,
                    spritelist[i].rect.origin.x + spritelist[i].rect.size.w)) {
        graphics_draw_bitmap_in_rect(ctx, bitmap_get(spritelist[i].res),
                                     GRect(spritelist[i].rect.origin.x - realdaymin,
                                           spritelist[i].rect.origin.y,
                                           spritelist[i].rect.size.w,
                                           spritelist[i].rect.size.h));
      } else if (RANGE_TEST(0,
                            SCREENWIDTH - (MINSINDAY - realdaymin),
                            spritelist[i].rect.origin.x,
                            spritelist[i].rect.origin.x + spritelist[i].rect.size.w)) {
        graphics_draw_bitmap_in_rect(ctx, bitmap_get(spritelist[i].res),
                                     GRect(spritelist[i].rect.origin.x + (MINSINDAY - realdaymin),
                                           spritelist[i].rect.origin.y,
                                           spritelist[i].rect.size.w,
                                           spritelist[i].rect.size.h));
      }
    }
  }
  graphics_draw_bitmap_in_rect(ctx, pointergfx,
                               GRect(SCREENWIDTH / 2 - 6, 0, 13, 7));

  // Status bar stuff
  graphics_draw_bitmap_in_rect(ctx, status,
                               GRect(2, SCREENHEIGHT - 13, 52, 11));
  graphics_draw_bitmap_in_rect(ctx, weekdays[weekday],
                               GRect(4, SCREENHEIGHT - 11, 17, 7));
  if(day > 9) {
    graphics_draw_bitmap_in_rect(ctx, numbers[day / 10],
                                 GRect(25, SCREENHEIGHT - 11, 5, 7));
  }
  graphics_draw_bitmap_in_rect(ctx, numbers[day % 10],
                               GRect(31, SCREENHEIGHT - 11, 5, 7));
  if(battlife <= BATT_MED_LEVEL) {
    graphics_draw_bitmap_in_rect(ctx, batteries[0],
                                 GRect(39, SCREENHEIGHT - 11, 5, 7));
  } else if(battlife <= BATT_HIGH_LEVEL) {
    graphics_draw_bitmap_in_rect(ctx, batteries[1],
                                 GRect(39, SCREENHEIGHT - 11, 5, 7));
  } else if(battlife <= BATT_FULL_LEVEL) {
    graphics_draw_bitmap_in_rect(ctx, batteries[2],
                                 GRect(39, SCREENHEIGHT - 11, 5, 7));
  } else {
    graphics_draw_bitmap_in_rect(ctx, batteries[3],
                                 GRect(39, SCREENHEIGHT - 11, 5, 7));
  }
  if(btstatus) {
    graphics_draw_bitmap_in_rect(ctx, bluetooth,
                                 GRect(47, SCREENHEIGHT - 11, 5, 7));
  }

#ifdef PROFILING
  // before bitmaps_clean() to get peak heap usage.
  APP_LOG(APP_LOG_LEVEL_DEBUG, "Heap free after draw: %d", heap_bytes_free());
#endif
  bitmaps_clean();

#ifdef PROFILING
  endms = time_ms(NULL, NULL);
  end = time(NULL);

  APP_LOG(APP_LOG_LEVEL_DEBUG, "Draw took %d milliseconds", ((end * 1000 + endms) - (start * 1000 + startms)));
#endif
}

static void main_window_load(Window *window) {
  mainwindow = window;
  
  Layer *root = window_get_root_layer(window);

  screen = layer_create(GRect(0, 0, SCREENWIDTH, SCREENHEIGHT));
  
  pointergfx = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_POINTER);
  bg = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BG);
  status = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_STATUS);
  bluetooth = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLUETOOTH);

  weekdays[0] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_SUNDAY);
  weekdays[1] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_MONDAY);
  weekdays[2] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_TUESDAY);
  weekdays[3] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_WEDNESDAY);
  weekdays[4] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_THURSDAY);
  weekdays[5] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_FRIDAY);
  weekdays[6] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_SATURDAY);

  numbers[0] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_0_SMALL);
  numbers[1] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_1_SMALL);
  numbers[2] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_2_SMALL);
  numbers[3] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_3_SMALL);
  numbers[4] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_4_SMALL);
  numbers[5] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_5_SMALL);
  numbers[6] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_6_SMALL);
  numbers[7] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_7_SMALL);
  numbers[8] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_8_SMALL);
  numbers[9] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_9_SMALL);

  batteries[0] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT_LOW);
  batteries[1] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT_MED);
  batteries[2] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT_HIGH);
  batteries[3] = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT_FULL);

  
  update_time();

  // this has to be set right away, otherwise it won't be until after tha animation.
  update_window_color();

  layer_set_update_proc(screen, draw_full);
  
  layer_add_child(root, screen);
}

static void main_window_unload(Window *window) {
  layer_destroy(screen);
  
  gbitmap_destroy(pointergfx);
  gbitmap_destroy(bg);
  gbitmap_destroy(status);
  gbitmap_destroy(bluetooth);

  gbitmap_destroy(weekdays[0]);
  gbitmap_destroy(weekdays[1]);
  gbitmap_destroy(weekdays[2]);
  gbitmap_destroy(weekdays[3]);
  gbitmap_destroy(weekdays[4]);
  gbitmap_destroy(weekdays[5]);
  gbitmap_destroy(weekdays[6]);

  gbitmap_destroy(numbers[0]);
  gbitmap_destroy(numbers[1]);
  gbitmap_destroy(numbers[2]);
  gbitmap_destroy(numbers[3]);
  gbitmap_destroy(numbers[4]);
  gbitmap_destroy(numbers[5]);
  gbitmap_destroy(numbers[6]);
  gbitmap_destroy(numbers[7]);
  gbitmap_destroy(numbers[8]);
  gbitmap_destroy(numbers[9]);

  gbitmap_destroy(batteries[0]);
  gbitmap_destroy(batteries[1]);
  gbitmap_destroy(batteries[2]);
  gbitmap_destroy(batteries[3]);
}

static void init() {
  mainwindow = window_create();
  window_set_window_handlers(mainwindow, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });

  window_stack_push(mainwindow, false);
  
#ifdef FORCESTARTAT  
  accel_tap_service_subscribe(advance_time_manually);
#else
  tick_timer_service_subscribe(MINUTE_UNIT, handle_tick);
#endif
}

static void deinit() {
#ifdef FORCESTARTAT
  accel_tap_service_unsubscribe();
#else
  tick_timer_service_unsubscribe();
#endif
  window_destroy(mainwindow);

  // calling twice will make sure they're all freed.
  bitmaps_clean();
  bitmaps_clean();
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
