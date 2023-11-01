# MALLOC,FREE

In this project, I learnt about the concept of [Automatic and dynamic allocation, malloc and free](https://intranet.alxswe.com/concepts/62)
The following are the quiz thst I solved ;
##### [0-create_array.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)
Writes a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c)

Returns NULL if size = 0

Returns a pointer to the array, or NULL if it fails


##### [1-strdup.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)
Writes a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str)

The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

##### [2-strconcat.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)
Writes a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);

The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure

##### [3-alloc_grid.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)
Write a function that returns a pointer to a 2 dimensional array of integers.
* Prototype: int **alloc_grid(int width, int height);
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL
