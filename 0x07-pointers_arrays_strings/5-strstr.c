#inlcude "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (*needle == '\0')
{
return haystack;
}

for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
}

return (NULL);
}
