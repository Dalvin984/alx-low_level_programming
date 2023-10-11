/*
 * File: 2-print_alphabet_x10.c
 * Auth: Dalvin O. Onyango
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char i;

	while (j++ <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

