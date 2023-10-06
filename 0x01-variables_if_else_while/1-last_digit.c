/*
 * File: 1-last_digit.c
 *
 * Author: Dalvin O. Onyango
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Main: Printing the last digit in the variable n
 * 	and determining if it is greater than 5
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if	(n > 6 && n! == 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	else
		printf("Last digit of %d and is 0\n", n);
	return (0);
}
