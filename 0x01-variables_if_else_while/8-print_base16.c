/*
 * File: 8-print_base16.c
 * Auth: Dalvin O. Onyango 
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
		putchar((j % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
