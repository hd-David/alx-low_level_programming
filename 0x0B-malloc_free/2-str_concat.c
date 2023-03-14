#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);

char *new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
{
return (NULL);
}
size_t i, j;
for (i = 0; s1[i] != '\0'; i++)
{
new_str[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
new_str[i + j] = s2[j];
new_str[i + j] = '\0';
}
return (new_str);
}
