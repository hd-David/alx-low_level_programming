#include "main.h"
#include <stddef.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 * and a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
if (s1 == NULL || s2 == NULL)
return -1;

while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*s1 - *s2);
}
