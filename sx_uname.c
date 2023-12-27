/*	sx_uname.c

	UNAME for Samarux.

	Return system name.

	Copyright (c) 2007 - 2023 Miguel I. Garcia Lopez.

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

	uname [-amnrsv]

	Examples:

	uname
	uname -v

	Changes:

	26 Dec 2023 : 1.00 : 1st version.
*/

/* Built-in or external
   --------------------
*/
#ifdef SX_SAMARUX

#define SX_UNAME

#else

#include "samarux.h"

#define UnameMain main

#endif

#define UNAME_FLG_A 0xffff
#define UNAME_FLG_M 1
#define UNAME_FLG_N 2
#define UNAME_FLG_R 4
#define UNAME_FLG_S 8
#define UNAME_FLG_V 16

int uname_flags;
int uname_out;

UnameMain(argc, argv)
int argc, argv[];
{
	int i;
	char *p;

	/* Defaults */

	uname_flags = uname_out = 0;

	/* Check arguments */

	if(argc == 1)
	{
		uname_flags = UNAME_FLG_S;
	}
	else
	{
		for(i = 1; i < argc; ++i)
		{
			p = argv[i];

			if(*p == '-')
			{
				while(*++p)
				{
					switch(*p)
					{
						case 'a' : uname_flags |= UNAME_FLG_A; break;
						case 'm' : uname_flags |= UNAME_FLG_M; break;
						case 'n' : uname_flags |= UNAME_FLG_N; break;
						case 'r' : uname_flags |= UNAME_FLG_R; break;
						case 's' : uname_flags |= UNAME_FLG_S; break;
						case 'v' : uname_flags |= UNAME_FLG_V; break;
						default  : return ErrorOpt();
					}
				}
			}
			else
			{
				return ErrorIll();
			}
		}
	}

	/* Just do it */

	UnameDoIt();

	/* Return success */

	return 0;
}

UnameDoIt()
{
	char s[6];

	/* FIXME -- some values should be anywhere in the core */

	if(uname_flags & UNAME_FLG_S) {
		UnameOut(sv_name);
	}

	if(uname_flags & UNAME_FLG_N) {
		UnameOut("MyComputer");
	}

	if(uname_flags & UNAME_FLG_R) {
		sprintf(s, "%d.%02d", sv_ver_main, sv_ver_seq);

		UnameOut(s);
	}

	if(uname_flags & UNAME_FLG_V) {
		UnameOut(sv_ver_date);
	}

	if(uname_flags & UNAME_FLG_M) {
		UnameOut("Z80");
	}
	
	putchar('\n');
}

UnameOut(s)
char *s;
{
	if(uname_out++) {
		putchar(' ');
	}

	putstr(s);
}

#undef UNAME_FLG_A
#undef UNAME_FLG_M
#undef UNAME_FLG_N
#undef UNAME_FLG_R
#undef UNAME_FLG_S
#undef UNAME_FLG_V
