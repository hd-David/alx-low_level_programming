#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;

/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}

/* Append the src string to the end of dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
/* Add a terminating null byte at the end */
dest[i] = '\0';
return (dest);
}
