#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 *           in the string haystack.
 * @haystack: pointer to the beginning of the string.
 * @needle: pointer to the substring to be found.
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (*pneedle == '\0')
return (bhaystack);
haystack = bhaystack + 1;
}
return (NULL);
}
