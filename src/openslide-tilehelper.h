/*
 *  OpenSlide, a library for reading whole slide image files
 *
 *  Copyright (c) 2007-2009 Carnegie Mellon University
 *  All rights reserved.
 *
 *  OpenSlide is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 2.
 *
 *  OpenSlide is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenSlide. If not, see <http://www.gnu.org/licenses/>.
 *
 *  Linking OpenSlide statically or dynamically with other modules is
 *  making a combined work based on OpenSlide. Thus, the terms and
 *  conditions of the GNU General Public License cover the whole
 *  combination.
 */

#ifndef OPENSLIDE_OPENSLIDE_TILEHELPER_H_
#define OPENSLIDE_OPENSLIDE_TILEHELPER_H_

#include "openslide.h"
#include "openslide-cache.h"

#include <stdbool.h>
#include <stdint.h>
#include <cairo.h>

void _openslide_read_tiles(cairo_t *cr,
			   int32_t layer,
			   int64_t start_tile_x, int64_t start_tile_y,
			   int64_t end_tile_x, int64_t end_tile_y,
			   double offset_x, double offset_y,
			   double advance_x, double advance_y,
			   openslide_t *osr,
			   struct _openslide_cache *cache,
			   void (*read_tile)(openslide_t *osr,
					     cairo_t *cr,
					     int32_t layer,
					     int64_t tile_x, int64_t tile_y,
					     struct _openslide_cache *cache));
#endif
