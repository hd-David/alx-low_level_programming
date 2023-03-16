#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to the concatenated string or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int s1_len, s2_len, i, j;
/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Get the length of the strings */
s1_len = strlen(s1);
s2_len = strlen(s2);
/* Allocate memory for the concatenated string */
if (n < s2_len)
concat_str = malloc(s1_len + n + 1);
else
concat_str = malloc(s1_len + s2_len + 1);
/* Check if malloc was successful */
if (concat_str == NULL)
return (NULL);
/* Copy the contents of s1 into the concatenated string */
for (i = 0; s1[i] != '\0'; i++)
concat_str[i] = s1[i];
/* Copy the first n bytes of s2 into the concatenated string */
for (j = 0; j < n && s2[j] != '\0'; j++, i++)
concat_str[i] = s2[j];
/* Terminate the concatenated string with a null byte */
concat_str[i] = '\0';
/* Return the pointer to the concatenated string */
return (concat_str);
}
