/*
 * File: 2-strlen_recursion.c
 * Owner: Dalvin O. Onyango
 */

#include "main.h"
/*
 * _strlen_recursion - returns the length of a string
 *
 * @s - string to be measured
 *
 * Return:The length of a string
 */

int _strlen_recursion(char *s)
{	
	int len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);

	}
	return (len);
}
