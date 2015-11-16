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

#include "bitmap.h"
#include "bitmaplist.h" // goes after managed_bitmap.h

//int curseq = 1;

Bitmap *find_bitmap(uint32_t res) {
  unsigned int i;
  
  for(i = 0; i < BITMAPCOUNT; i++) {
    if(bitmaps[i].res == res)
      return &(bitmaps[i]);
  }
  
  return(NULL);
}

// loads a bitmap or just returns the bitmap if it's already loaded.
GBitmap *bitmap_get(uint32_t res) {
  Bitmap *mb;
  
  mb = find_bitmap(res);
  if(mb == NULL)
    return(NULL);
  
  if(mb->b == NULL) {
    mb->b = gbitmap_create_with_resource(res);
    if(mb->b == NULL)
      return(NULL);
  }
  
  mb->ref = 1;
  return(mb->b);
}
  
void bitmap_free(uint32_t res) {
  Bitmap *mb;

  mb = find_bitmap(res);
  if(mb == NULL)
    return;

  if(mb->b == NULL)
    return;

  gbitmap_destroy(mb->b);
  mb->b = NULL;
}

/*
 * Run through all bitmaps and free ones not referred to since last call.
 */
void bitmaps_clean() {
  unsigned int i;
  for(i = 0; i < BITMAPCOUNT; i++) {
    if(bitmaps[i].ref == 0) {
      gbitmap_destroy(bitmaps[i].b);
      bitmaps[i].b = NULL;
    } else {
      bitmaps[i].ref = 0;
    }
  }
}
