#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the newly allocated string or NULL on failure
 */
char *_strdup(char *str)
{
int len = strlen(str);
char *dup = malloc((len + 1) * sizeof(char));

if (dup == NULL || str == NULL)
{
return (NULL);
}
for (size_t i = 0; i <= len; i++)
{
dup[i] = str[i];
}

return (dup);
}
