/*
 * File: 0-puts_recursion.c
 *
 * Owner : Dalvin O. Onyango
 */

#include "main.h"
/*
 * _puts-recursion - Prints  a string followed by new line
 *
 * @s - string  variable
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

