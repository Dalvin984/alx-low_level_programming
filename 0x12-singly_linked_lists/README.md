# SINGLY LINKED LISTS

In this project I learnt about the concept of singly linked list using the following resources:
* [Data Structures](https://intranet.alxswe.com/concepts/120)
* [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)
* [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)
* [Youtube](https://www.youtube.com/results?search_query=linked+lists)

### TASKS

##### [0-print_list.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)
Write a function that prints all the elements of a list_t list.
* Prototype: `size_t print_list(const list_t *h);`
* Return: the number of nodes
* Format: see example
* If `str` is `NULL`, print `[0]` `(nil)`
* You are allowed to use `printf`


##### [1-list_len.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c)
Write a function that returns the number of elements in a linked `list_t` list.
* Prototype: `size_t list_len(const list_t *h);`


##### [2-add_node.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c)
Write a function that adds a new node at the beginning of a `list_t` list.
* Prototype: `list_t *add_node(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`


##### [3-add_node_end.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c)
Write a function that adds a new node at the end of a `list_t` list.
* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`


##### [4-free_list.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c)
Write a function that frees a `list_t` list.
* Prototype: `void free_list(list_t *head);`


##### [100-first.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c)
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.
* You are allowed to use the `printf` function


##### [101-hello_holberton.asm](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm)
Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
* You are only allowed to use the `printf` function
* You are not allowed to use interrupts
* Your program will be compiled using `nasm` and `gcc`:

