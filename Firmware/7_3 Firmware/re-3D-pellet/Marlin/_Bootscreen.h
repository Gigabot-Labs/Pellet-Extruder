/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   5000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xCF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7F, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFE, 0x03, 0xF8, 0x00, 0x03, 0x06, 0x00, 0x09, 0x00, 0x00, 0x80, 0x10, 0x0E, 0x00,
0x00, 0x03, 0xFC, 0x00, 0xFC, 0x00, 0x03, 0x06, 0x00, 0x08, 0x00, 0x01, 0x80, 0x30, 0x11, 0x00,
0x00, 0x1F, 0xC0, 0x00, 0x3F, 0x80, 0x03, 0x0E, 0x00, 0x08, 0x00, 0x03, 0x80, 0x70, 0x11, 0x00,
0x00, 0x3F, 0x80, 0x00, 0x0F, 0xC0, 0x02, 0x8A, 0x3C, 0xE9, 0x3C, 0x00, 0x80, 0x10, 0x11, 0x00,
0x00, 0x7E, 0x00, 0x00, 0x07, 0xF0, 0x02, 0x8A, 0x44, 0x89, 0x22, 0x00, 0x80, 0x10, 0x0E, 0x00,
0x01, 0xF8, 0x00, 0x20, 0x01, 0xF8, 0x02, 0x12, 0x04, 0x89, 0x22, 0x00, 0x80, 0x10, 0x11, 0x00,
0x03, 0xF8, 0x00, 0x78, 0x00, 0xFC, 0x02, 0x52, 0x3C, 0x89, 0x22, 0x00, 0x80, 0x10, 0x11, 0x00,
0x0F, 0xC0, 0x03, 0xFE, 0x00, 0x1F, 0x82, 0x52, 0x44, 0x89, 0x22, 0x00, 0x80, 0x10, 0x11, 0x00,
0x0F, 0xC0, 0x07, 0xFF, 0x80, 0x1F, 0x82, 0x62, 0x4C, 0x89, 0x22, 0x00, 0x80, 0x10, 0x11, 0x00,
0x0F, 0xE0, 0x3F, 0xFF, 0xC0, 0x7F, 0x82, 0x22, 0x7C, 0x89, 0x22, 0x00, 0x88, 0x11, 0x0E, 0x00,
0x0F, 0xF8, 0x7F, 0xFF, 0xF0, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0F, 0xF8, 0xFF, 0xFF, 0xF9, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x7F, 0xFF, 0xFF, 0xFF, 0xF7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x0F, 0xFF, 0xFF, 0xFF, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFF, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0xF0, 0x80, 0x00, 0x40, 0x00, 0x00, 0xE0, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xF3, 0x1E, 0x07, 0x81, 0x08, 0x00, 0x00, 0x40, 0x01, 0x01, 0x10, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xE9, 0x76, 0x07, 0x82, 0x04, 0x00, 0x00, 0x40, 0x01, 0x00, 0x10, 0x40, 0x00,
0x0E, 0x07, 0x09, 0xBB, 0x76, 0x07, 0x82, 0x00, 0x8F, 0x1E, 0x78, 0x73, 0x80, 0x10, 0x40, 0x00,
0x0E, 0x07, 0x72, 0xB7, 0x76, 0x07, 0x82, 0x00, 0x91, 0x22, 0x64, 0x89, 0x00, 0x60, 0x40, 0x00,
0x0E, 0x07, 0x70, 0x9B, 0x76, 0x07, 0x82, 0x3C, 0x91, 0x02, 0x46, 0x89, 0x00, 0x13, 0xF0, 0x00,
0x0E, 0x07, 0x77, 0x1A, 0x66, 0x07, 0x82, 0x04, 0x91, 0x1E, 0x42, 0x89, 0x00, 0x10, 0x40, 0x00,
0x0E, 0x07, 0x70, 0xE0, 0x1E, 0x07, 0x82, 0x04, 0x91, 0x22, 0x44, 0x89, 0x00, 0x10, 0x40, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x81, 0x0C, 0x91, 0x26, 0x64, 0x89, 0x01, 0x10, 0x40, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0xF8, 0x8F, 0x3E, 0x78, 0x71, 0x80, 0xE0, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x07, 0xFF, 0xFF, 0xFE, 0x07, 0x80, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x01, 0xFF, 0xFF, 0xF8, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x00, 0x7F, 0xFF, 0xF0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x00, 0x3F, 0xFF, 0xC0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0F, 0x00, 0x07, 0xFF, 0x80, 0x0F, 0x81, 0xC0, 0x38, 0x70, 0x02, 0x1C, 0x00, 0x00, 0x00, 0x00,
0x0F, 0x80, 0x03, 0xFF, 0x00, 0x0F, 0x83, 0x20, 0x44, 0xD8, 0x06, 0x22, 0x00, 0x00, 0x00, 0x00,
0x07, 0xF0, 0x00, 0x78, 0x00, 0xFF, 0x82, 0x00, 0x44, 0x88, 0x0E, 0x22, 0x00, 0x00, 0x00, 0x00,
0x03, 0xF8, 0x00, 0x30, 0x00, 0xFC, 0x02, 0x00, 0x04, 0x88, 0x02, 0x22, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFC, 0x00, 0x30, 0x03, 0xF8, 0x03, 0xC0, 0x04, 0x88, 0x02, 0x1C, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0x00, 0x30, 0x07, 0xF0, 0x02, 0x20, 0x08, 0x88, 0x02, 0x22, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0x80, 0x30, 0x1F, 0xC0, 0x02, 0x20, 0x10, 0x88, 0x02, 0x22, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xC0, 0x30, 0x3F, 0x80, 0x02, 0x20, 0x20, 0x88, 0x02, 0x22, 0x00, 0x00, 0x00, 0x00,
0x00, 0x03, 0xFC, 0x31, 0xFC, 0x00, 0x02, 0x20, 0x40, 0xD8, 0x02, 0x22, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFE, 0x33, 0xF8, 0x00, 0x01, 0xC4, 0xFC, 0x71, 0x02, 0x1C, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7F, 0xFF, 0xF1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xFF, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
