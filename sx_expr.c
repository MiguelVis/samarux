/*	sx_expr.c

	EXPR for Samarux.

	Computes a single expression and outputs the result to the console.

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

	expr number1 operator number2

	Options:

	None.

	Valid operators are:

	add = add
	sub = subtract
	mul = multiply
	div = divide
	mod = modulo

	Examples:

	expr 4 add 3
	expr 5 sub 1
	
	Notes:
	
	The numbers and the result are 16 bit signed integers,
	from -32,768 to +32,767.

	Changes:

	12 Sep 2021 : 1.00 : 1st version.
*/

/* Built-in or external
   --------------------
*/
#ifdef SX_SAMARUX

#define SX_EXPR

#else

#include "samarux.h"

#define ExprMain main

#endif

ExprMain(argc, argv)
int argc, argv[];
{
	int n1, n2, op, result;

	/* Check arguments */

	if(argc != 4)
	{
		return ErrorPars();
	}

	/* Get arguments */

	n1 = atoi(argv[1]);  /* FIXME -- check it's a number */
	op = argv[2];
	n2 = atoi(argv[3]);  /* FIXME -- check it's a number */

	/* Perform operation */

	if(!strcmp("add", op))
	{
		result = n1 + n2;
	}
	else if(!strcmp("sub", op))
	{
		result = n1 - n2;
	}
	else if(!strcmp("mul", op))
	{
		result = n1 * n2;
	}
	else if(!strcmp("div", op))
	{
		result = n1 / n2;
	}
	else if(!strcmp("mod", op))
	{
		result = n1 % n2;
	}
	else
	{
		return ErrorIll();
	}

	/* Output result */

	printf("%d", result);

	/* Success */

	return 0;
}
