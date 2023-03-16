#include "main.h"

#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: On success, returns a pointer to the newly created array.
 *         On failure, returns NULL.
 */
int *array_range(int min, int max)
{
int i, size;
int *arr;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
