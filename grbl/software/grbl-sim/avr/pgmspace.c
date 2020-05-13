/*
  pgmspace.c - replacement for the avr library of the same name to provide
  dummy functions

  Part of Grbl Simulator

  Copyright (c) 2012 Jens Geisler

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

char pgm_read_byte_near(const char* s) {
  return s[0];
}

//also memory related stuff
int *__brkval = NULL;
int __heap_start = 0;
