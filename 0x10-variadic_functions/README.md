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

##### [2-print_strings.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c)
Write a function that prints strings, followed by a new line.
* Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`;
* where `separator` is the string to be printed between the strings
* and `n` is the number of strings passed to the function
You are allowed to use `printf`
8 If separator is NULL, don’t print it
* If one of the string is NULL, print `(nil)` instead
* Print a new line at the end of your function

##### [3-print_all.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c)
Write a function that prints anything.
Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
 * `c`: `char`
 * `i`: `integer`
 * `f`: `float`
 * `s`: `char *` (if the string is NULL, print `(nil)` instead
 * any other char should be ignored
 * see example
* You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
* You can use a maximum of
 * 2 `while` loops
 * 2 `if`
* You can declare a maximum of `9` variables
* You are allowed to use `printf`
* Print a new line at the end of your function
