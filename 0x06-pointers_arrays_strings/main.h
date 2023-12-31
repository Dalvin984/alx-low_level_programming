#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Owner: Dalvin O. Onyango
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *rot13(char *);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);

#endif
