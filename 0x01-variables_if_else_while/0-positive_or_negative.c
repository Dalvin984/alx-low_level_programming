/*
 * File: 0-positive_or_negative.c
 *
 * Auth: Dalvin O. Onyango
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* Main: Determinig if a number is negative,positive or zero
 *
 * Return : Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if	(n<0)
		printf("%d is negative\n",n);
	else if	(n==0)
		printf("%d is zero\n",n);
	else	(n>0)
		printf("%d is positive\n",n);
	return	(0);
}
