/* Copyright 2019 Branden Byers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, \
    k012, k013, k014, k015, k016, k017, k018, k019, k020, k021, k022, k023, \
    k024, k025, k026, k027, k028, k029, k030, k031, k032, k033, k034, k035, \
    k036, k037, k038, k039, k040, k041, k042, k043, k044, k045, k046, k047, \
    k048, k049, k050, k051, k052, k053, k054, k055, k056, k057, k058, k059, \
    k060, k061, k062, k063, k064, k065, k066, k067, k068, k069, k070, k071, \
    k072, k073, k074, k075, k076, k077, k078, k079, k080, k081, k082, k083, \
    k084, k085, k086, k087, k088, k089, k090, k091, k092, k093, k094, k095, \
    k096, k097, k098, k099, k100, k101, k102, k103, k104, k105, k106, k107, \
    k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, k118, k119, \
    k120, k121, k122, k123, k124, k125, k126, k127, k128, k129, k130, k131, \
    k132, k133, k134, k135, k136, k137, k138, k139, k140, k141, k142, k143  \
) \
{ \
    { k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011 }, \
    { k012, k013, k014, k015, k016, k017, k018, k019, k020, k021, k022, k023 }, \
    { k024, k025, k026, k027, k028, k029, k030, k031, k032, k033, k034, k035 }, \
    { k036, k037, k038, k039, k040, k041, k042, k043, k044, k045, k046, k047 }, \
    { k048, k049, k050, k051, k052, k053, k054, k055, k056, k057, k058, k059 }, \
    { k060, k061, k062, k063, k064, k065, k066, k067, k068, k069, k070, k071 }, \
    { k072, k073, k074, k075, k076, k077, k078, k079, k080, k081, k082, k083 }, \
    { k084, k085, k086, k087, k088, k089, k090, k091, k092, k093, k094, k095 }, \
    { k096, k097, k098, k099, k100, k101, k102, k103, k104, k105, k106, k107 }, \
    { k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, k118, k119 }, \
    { k120, k121, k122, k123, k124, k125, k126, k127, k128, k129, k130, k131 }, \
    { k132, k133, k134, k135, k136, k137, k138, k139, k140, k141, k142, k143 }  \
}
