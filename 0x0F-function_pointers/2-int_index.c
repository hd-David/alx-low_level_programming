#include "function_pointers.h"
/**
 * int_index - function returns the index of the first element
 * @array: the array to loop through
 * @size: the size of the array
 * @cmp: the function pointers
 *
 * Return: index of the first element for which the cmp function does
 * not return 0,
 * or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int k;


if (array && cmp)
{
if (size <= 0)
return (-1);
for (k = 0; k < size; k++)
{
if (cmp(array[k]) != 0)
{
return (1);
}
}
}
return (-1);
}
