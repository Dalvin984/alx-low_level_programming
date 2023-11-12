# VARIADIC FUNCTIONS

In this project, I learnt about the following concepts:
[stdarg.h](https://intranet.alxswe.com/rltoken/wLRJdO8pA2-Vb-rF2Y71sA)
[variadic functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
[const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

## TASKS

##### [0-sum_them_all.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c)
Write a function that returns the sum of all its parameters.
* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0,` return `0`

##### [1-print_numbers.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c)
Write a function that prints numbers, followed by a new line.
* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between numbers
*and `n` is the number of integers passed to the function
* You are allowed to use printf
* If `separator` is `NULL`, don’t print it
* Print a new line at the end of your function
