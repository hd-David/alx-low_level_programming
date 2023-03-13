#include "main.h"
#include <stdlib.h>

/**
 * create_array:  creates an array of chars
 * and initializes it with a specific char
 *
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
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(c));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

