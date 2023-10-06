/*
 * File: 2-print_alphabet.c
 *
 * Author: Dalvin O. Onyango
 */
#include <stdio.h>

/*
 * Main: Program that prints alphabets in
 * 	lowercase,followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	for(ch='a'; ch<='z'; ch++)
		putchar(int ch);
	putchar('\n');
	return (0);
}
