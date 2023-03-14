#include "main.h"
#include <stdlib.h>

/**
 * create_array:  creates an array of chars
 * and initializes it with a specific char
 * Description: creat array of size size and assign char c
 * @size: the size of the array to be created
 * @c: the character used to initialize the array
 *
 * Return: On success, returns a pointer to the array.
 * Otherwise, returns NULL.
 */

char *crate_array(unsigned int size, char c)
{

unsigned int i;
char *arr;
arr = malloc(size * sizeof(c));
if (size == 0 || arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

