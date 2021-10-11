/*	sx2.c

	+------------------------------------+
	| SamaruX - Unix like shell for CP/M |
	+------------------------------------+
	
	This build configuration has every command as built-in. It does not
	support external commands. Its main goal is to reduce the disk space
	needed to run SamaruX. But it needs a bigger TPA.
	
	Copyright (c) 2007-2021 Miguel I. Garcia Lopez.

	This program is free software; you can redistribute it and/or modify it
	under the terms of the GNU General Public License as published by the
	Free Software Foundation; either version 2, or (at your option) any
	later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

	Contact:

	www.floppysoftware.es
	cpm-connections.blogspot.com
	floppysoftware@gmail.com

	Compile with MESCC:

	make_sx2.bat

	Revisions:

	11 Oct 2021 : Start from sx.c.
*/

/* DEFs FOR SamaruX
   ----------------
*/

//#define SX_DEBUG      /* Debug */
//#define SX_EXTCMDS    /* External commands support */
//#define SX_HKEXIT     /* Hook for exit() */
//#define SX_MINIMAL    /* Minimal # of built-in commands */
#define SX_CMDCPM     /* Support for cpm command */

#include "sx_core.c"
