/*
 *      Copyright (C) 2010-2019 Hendrik Leppkes
 *      http://www.1f0.de
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#pragma once

// Set minimal target OS (Vista+)
#ifdef _WIN32_WINNT
#undef _WIN32_WINNT
#endif
#define _WIN32_WINNT 0x0600
#ifdef WINVER
#undef WINVER
#endif
#define WINVER _WIN32_WINNT

#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN

#define LAV_AUDIO "LAV Audio Decoder"
#define LAV_VIDEO "LAV Video Decoder"
#define LAV_SPLITTER "LAV Splitter"

#define LAV_COMMENT "This is unofficial build for Windows XP. See https://github.com/3dyd/LAVFiltersXP"
