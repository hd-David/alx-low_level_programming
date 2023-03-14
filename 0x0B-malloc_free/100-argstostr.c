#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++; /* For the new line character */
}

/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

/* Concatenate the strings and add new line character */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';
return (str);
}
