#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */
void puts2(char *str)
{
int i;

/* iterate over the characters of the string */
for (i = 0; str[i] != '\0'; i++)
{
/* print every other character, starting with the first */
if (i % 2 == 0)
{
putchar(str[i]);
}
}
/* print a new line at the end */
putchar('\n');
}
