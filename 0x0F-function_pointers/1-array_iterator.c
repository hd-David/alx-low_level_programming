#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - loops through the array
 * @array: the pointer to array we want to iterate through
 * @size: size of the array
 * @action: pointer to a function
 * Description: This function takes three
 * agurments and iterates through the array
 * Returns : nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
size_t i;
if(array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
