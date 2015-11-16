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

typedef struct {
  uint32_t res;
  GBitmap *b;
  char ref;
} Bitmap;

GBitmap *bitmap_get(uint32_t res);
void bitmaps_clean();
