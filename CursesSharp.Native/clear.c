/*
 * CursesSharp
 * 
 * Copyright 2009 Robert Konklewski
 * 
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * www.gnu.org/licenses/>.
 * 
 */

#include "wrapper.h"


WRAP_API int
WRAP_wclear(WINDOW *win)
{
	return wclear(win);
}

WRAP_API int
WRAP_werase(WINDOW *win)
{
	return werase(win);
}

WRAP_API int
WRAP_wclrtobot(WINDOW *win)
{
	return wclrtobot(win);
}

WRAP_API int
WRAP_wclrtoeol(WINDOW *win)
{
	return wclrtoeol(win);
}
