/*	sx_ps.c

	PS for Samarux.

	Prints running commands (processes).

	Copyright (c) 2021 Miguel I. Garcia Lopez.

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

	ps

	Examples:

	ps

	Changes:

	20 Sep 2021 : 1.00 : 1st version.
*/

/* Built-in or external
   --------------------
*/
#ifdef SX_SAMARUX

#define SX_PS

#else

#include "samarux.h"

#define PsMain main

#endif

PsMain(argc, argv)
int argc, argv[];
{
	int i;

	/* Check arguments */

	if(argc != 1)
		return ErrorPars();

	/* Print running commands */
	
	printf("PID CMD\n");
	
	for(i = 0; i < SX_MAX_RUN; ++i)
	{
		if(sv_run_name[i])
		{
			printf("%3d %s\n", i, sv_run_name[i]);
		}
		else
		{
			break;
		}
	}

	/* Success */

	return 0;
}
