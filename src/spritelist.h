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

#define SPRITECOUNT (sizeof(spritelist) / sizeof(Sprite))

// TODO: maybe hand tweak some stuff to look better (ongoing)
// TODO: mountains
// TODO: Trees and stuff

Sprite spritelist[] = {
  // ##### FILLER START #####
  {
    .rect = {
      .origin = {.x = 1383, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 7, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 71, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 135, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 199, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 263, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 327, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 391, .y = 136},
      .size = {.w = 32, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 503, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 567, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 1063, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 1127, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 1191, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 1255, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 1319, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  // ##### FILLER END #####
  // ##### LAND RIDGE #####
  { // 57
    .rect = {
      .origin = {.x = 1368, .y = 132},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 59
    .rect = {
      .origin = {.x = 1416, .y = 124},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 6
    .rect = {
      .origin = {.x = 100, .y = 129},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 5
    .rect = {
      .origin = {.x = 65, .y = 121},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 3
    .rect = {
      .origin = {.x = 24, .y = 118},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 13
    .rect = {
      .origin = {.x = 292, .y = 131},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 11
    .rect = {
      .origin = {.x = 242, .y = 128},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 9
    .rect = {
      .origin = {.x = 193, .y = 124},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 8
    .rect = {
      .origin = {.x = 157, .y = 122},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 22
    .rect = {
      .origin = {.x = 490, .y = 133},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 23
    .rect = {
      .origin = {.x = 517, .y = 122},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 19
    .rect = {
      .origin = {.x = 400, .y = 139},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  // ##### LITTLE STREAM START #####
  {
    .rect = {
      .origin = {.x = 465, .y = 149},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 455, .y = 153},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 472, .y = 154},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 450, .y = 161},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 480, .y = 161},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 465, .y = 161},
      .size = {.w = 24, .h = 8}
    },
    .res = RESOURCE_ID_IMAGE_WATER_NARROW,
  },
  {
    .rect = {
      .origin = {.x = 465, .y = 147},
      .size = {.w = 24, .h = 4}
    },
    .res = RESOURCE_ID_IMAGE_FOAM,
  },
  {
    .rect = {
      .origin = {.x = 445, .y = 145},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_FORE,
  },
  {
    .rect = {
      .origin = {.x = 502, .y = 164},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_BACK,
  },
  {
    .rect = {
      .origin = {.x = 483, .y = 145},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_BACK,
  },
  // ##### LITTLE STREAM END #####
  { // 17
    .rect = {
      .origin = {.x = 377, .y = 131},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 15
    .rect = {
      .origin = {.x = 339, .y = 125},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 14
    .rect = {
      .origin = {.x = 308, .y = 124},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  //  ##### LARGE LAKE START #####
  {
    .rect = {
      .origin = {.x = 664, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 728, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 792, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 856, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 920, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 984, .y = 136},
      .size = {.w = 24, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_WATER_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 999, .y = 136},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  {
    .rect = {
      .origin = {.x = 631, .y = 136},
      .size = {.w = 35, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND_FILLER,
  },
  { // 27
    .rect = {
      .origin = {.x = 630, .y = 126},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 26
    .rect = {
      .origin = {.x = 600, .y = 120},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 24
    .rect = {
      .origin = {.x = 556, .y = 113},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  {
    .rect = {
      .origin = {.x = 673, .y = 133},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_FORE,
  },  
  {
    .rect = {
      .origin = {.x = 657, .y = 151},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_FORE,
  },  
  // ##### LARGE LAKE END #####
  { // 46
    .rect = {
      .origin = {.x = 1100, .y = 127},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 45
    .rect = {
      .origin = {.x = 1066, .y = 119},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  { // 42
    .rect = {
      .origin = {.x = 973, .y = 124},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // large lake beach
    .rect = {
      .origin = {.x = 969, .y = 133},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_BACK,
  },  
  { // large lake beach
    .rect = {
      .origin = {.x = 987, .y = 152},
      .size = {.w = 24, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_BEACH_BACK,
  },  
  { // 43
    .rect = {
      .origin = {.x = 1015, .y = 117},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 48
    .rect = {
      .origin = {.x = 1158, .y = 123},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 52
    .rect = {
      .origin = {.x = 1258, .y = 126},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 51
    .rect = {
      .origin = {.x = 1227, .y = 124},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 50
    .rect = {
      .origin = {.x = 1203, .y = 115},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND2,
  },
  { // 55
    .rect = {
      .origin = {.x = 1325, .y = 130},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND,
  },
  { // 54
    .rect = {
      .origin = {.x = 1306, .y = 122},
      .size = {.w = 64, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_LAND3,
  },
  // ##### DECORATIONS START #####
  {
    .rect = {
      .origin = {.x = 770, .y = 40},
      .size = {.w = 32, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_SUN,
  },
  {
    .rect = {
      .origin = {.x = 120, .y = 40},
      .size = {.w = 32, .h = 32}
    },
    .res = RESOURCE_ID_IMAGE_MOON,
  },
  {
    .rect = {
      .origin = {.x = 47, .y = 19},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1015, .y = 26},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 902, .y = 30},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 740, .y = 58},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1248, .y = 36},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1431, .y = 47},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 604, .y = 8},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1274, .y = 43},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 27, .y = 34},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 373, .y = 56},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 195, .y = 36},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1409, .y = 40},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 427, .y = 22},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 838, .y = 24},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1165, .y = 25},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 173, .y = 20},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 455, .y = 8},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 603, .y = 40},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1406, .y = 9},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 233, .y = 28},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 988, .y = 18},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1133, .y = 50},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1320, .y = 27},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 316, .y = 39},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 504, .y = 36},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 478, .y = 50},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 99, .y = 38},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 959, .y = 30},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 691, .y = 20},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 1030, .y = 35},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 324, .y = 29},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 588, .y = 48},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 380, .y = 50},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 627, .y = 50},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 674, .y = 39},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 674, .y = 55},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1067, .y = 39},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 569, .y = 49},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 208, .y = 14},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 828, .y = 53},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 166, .y = 40},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 430, .y = 36},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 352, .y = 11},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 497, .y = 19},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 731, .y = 30},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 838, .y = 25},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1116, .y = 14},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 692, .y = 59},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 1392, .y = 26},
      .size = {.w = 32, .h = 12}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_SMALL,
  },
  {
    .rect = {
      .origin = {.x = 25, .y = 17},
      .size = {.w = 64, .h = 24}
    },
    .res = RESOURCE_ID_IMAGE_CLOUD_LARGE,
  },
  {
    .rect = {
      .origin = {.x = 781, .y = 136},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },
  {
    .rect = {
      .origin = {.x = 779, .y = 140},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 785, .y = 140},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 778, .y = 145},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 784, .y = 147},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 776, .y = 153},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 787, .y = 155},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 790, .y = 161},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 779, .y = 160},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  {
    .rect = {
      .origin = {.x = 773, .y = 162},
      .size = {.w = 10, .h = 3}
    },
    .res = RESOURCE_ID_IMAGE_SUN_REFLECT,
  },  
  // ##### DECORATIONS END #####
  // ##################################################
  // ##### PLACE ALL GRAPHICS BEFORE THIS LINE!!! #####
  // ##################################################
  {
    .rect = {
      .origin = {.x = 60 - 2, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 120 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 180 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_3,
  },
  {
    .rect = {
      .origin = {.x = 240 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_4,
  },
  {
    .rect = {
      .origin = {.x = 300 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_5,
  },
  {
    .rect = {
      .origin = {.x = 360 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_6,
  },
  {
    .rect = {
      .origin = {.x = 420 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_7,
  },
  {
    .rect = {
      .origin = {.x = 480 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_8,
  },
  {
    .rect = {
      .origin = {.x = 540 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_9,
  },
  {
    .rect = {
      .origin = {.x = 600 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 600 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_0,
  },
  {
    .rect = {
      .origin = {.x = 660 - 5, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 660 + 1, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 720 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 720 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 780 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 780 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_3,
  },
  {
    .rect = {
      .origin = {.x = 840 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 840 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_4,
  },
  {
    .rect = {
      .origin = {.x = 900 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 900 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_5,
  },
  {
    .rect = {
      .origin = {.x = 960 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 960 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_6,
  },
  {
    .rect = {
      .origin = {.x = 1020 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 1020 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_7,
  },
  {
    .rect = {
      .origin = {.x = 1080 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 1080 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_8,
  },
  {
    .rect = {
      .origin = {.x = 1140 - 10, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 1140 - 4, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_9,
  },
  {
    .rect = {
      .origin = {.x = 1200 - 16, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 1200 + 1, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_0,
  },
  {
    .rect = {
      .origin = {.x = 1260 - 16, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 1260 + 1, .y = 2},
      .size = {.w = 5, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_1,
  },
  {
    .rect = {
      .origin = {.x = 1320 - 16, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 1320 + 1, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 1380 - 16, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_2,
  },
  {
    .rect = {
      .origin = {.x = 1380 + 1, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_3,
  },
  {
    .rect = {
      .origin = {.x = 1440 - 7, .y = 2},
      .size = {.w = 15, .h = 26}
    },
    .res = RESOURCE_ID_IMAGE_0,
  }
};
