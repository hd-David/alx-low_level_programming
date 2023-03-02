#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters from src to be used
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/*copy up to n characters from src to dest*/
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* Add null bytes if n > strlen(src) */
while (i < n)
{
dest[i] = '\0';
 i++;
}
return (dest);
}
