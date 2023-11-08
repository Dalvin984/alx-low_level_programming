# STRUCTURES

In this project I learnt about : 
[0x0d. Structures.pdf](https://intranet.alxswe.com/rltoken/giS4eNQT2BQ9RLK0PMhgJQ)
[struct (C programming language)](https://intranet.alxswe.com/rltoken/MinJEDOHpeZs31qaXU8v1w)
[Documentation: structures](https://intranet.alxswe.com/rltoken/Nexam-lEwrNHg2awV5Gv8g)
[0x0d. Typedef and structures.pdf](https://intranet.alxswe.com/rltoken/TGQ3RopVP7CjUTzF-XDXUw)
[typedef](https://intranet.alxswe.com/rltoken/aqqM2t7PLG5cyHaKwm5nBg)
[The Lost Art of C Structure Packing ](https://intranet.alxswe.com/rltoken/emb4ohNT7XKi8Peep5lyeA)

## TASKS

##### [ dog.h](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h)
Define a new type `struct dog` with the following elements:
* `name,` type = `char *`
* `age`, type = `float`
* `owner`, type = `char *`

##### [ 1-init_dog.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c)
Write a function that initialize a variable of type `struct dog`
* `Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);`

##### [2-print_dog.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c)
Write a function that prints a `struct dog`
* Prototype: `void print_dog(struct dog *d)`;
* Format: see example bellow
* You are allowed to use the standard library
* If an element of `d` is `NULL`, print `(nil)` instead of this element. (if name is `NULL`, print `Name: (nil)`)
* If `d` is `NULL` print nothing.

##### [dog.h](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h)
Define a new type `dog_t` as a new name for the type `struct dog`.

##### [4-new_dog.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c)
Write a function that creates a new dog.
* Prototype:` dog_t *new_dog(char *name, float age, char *owner)`;
* You have to store a copy of `name` and `owner`
* Return` NULL` if the function fails

##### [5-free_dog.c](https://github.com/Dalvin984/alx-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c)
Write a function that frees dogs.
* Prototype: `void free_dog(dog_t *d)`;
