/*	sx_clear.c

	CLEAR for Samarux.

	Clears the console.

	Copyright (c) 2007 - 2025 Miguel I. Garcia Lopez.

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

	Usage:

	clear

	Examples:

	clear

	Changes:

	19 Dec 2014 : 1.00 : 1st version.
	24 Dec 2014 : 1.01 : Added arguments control.
	02 Jan 2015 : 1.02 : Gets terminal type from environment.
	12 Feb 2015 : 1.03 : Added VT100 / ANSI support.
	14 Feb 2015 : 1.04 : Added ASCII support.
	26 Feb 2015 : 1.05 : Modified ASCII procedure.
	29 Nov 2015 : 1.06 : Added support for builtin / external.
	26 Jul 2025 : 1.07 : Added Televideo, ADM-31 / 3A support.
*/

/* Built-in or external
   --------------------
*/
#ifdef SX_SAMARUX

#define SX_CLEAR

#else

#include "samarux.h"

#define ClearMain main

#endif

ClearMain(argc, argv)
int argc, argv[];
{
	char *term;
	int k;

	/* Check arguments */

	if(argc != 1)
		return ErrorPars();

	/* Clear */

	if((term = EnvGet("TERM")) != NULL)
	{
		if(!strcmp(term, "vt52")) /* Amstrad PCW, CPC 6128, SAM Coupe, Spectrum +3 */
		{
			putch(27);putch('H');putch(27);putch('E');
		}
		else if(!strcmp(term, "vt100") || !strcmp(term, "ansi"))
		{
			putch(27);putstr("[2J");
			putch(27);putstr("[1;1H");
		}
		else if(!strcmp(term, "televideo")) { /* Apple II */
			putch(30);
			putch(27);putch('*');
		}
		else if(!strcmp(term, "adm")) /* Commodore 128, Kaypro II (and 4 or 10) */
		{
			putch(26);
		}
		else if(!strcmp(term, "ascii"))
		{
			k = TermRows();

			while(k--)
				putchar('\n');
		}
		else
			return Error("Unknown terminal type");

		return 0;
	}

	/* Failure */

	return Error("Can't find $TERM");
}

