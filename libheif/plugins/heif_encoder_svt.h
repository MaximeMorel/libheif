/*
 * HEIF codec.
 * Copyright (c) 2022, Dirk Farin <dirk.farin@gmail.com>
 *
 * This file is part of libheif.
 *
 * libheif is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * libheif is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libheif.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBHEIF_HEIF_ENCODER_SVT_H
#define LIBHEIF_HEIF_ENCODER_SVT_H


const struct heif_encoder_plugin* get_encoder_plugin_svt();

#if PLUGIN_SVTENC
extern "C" {
__attribute__((unused)) LIBHEIF_API extern heif_plugin_info plugin_info;
}
#endif

#endif
