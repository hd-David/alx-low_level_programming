#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int i, length;
/* compute the length of the string */
length = strlen(str);
/* determine the starting index for printing */
if (length % 2 == 0)
{
/* if the length is even, start from the middle */
i = length / 2;
}
else
{
/* if the length is odd, start from (length - 1) / 2 */
i = (length - 1) / 2;
}
/* print the second half of the string, starting from the computed index */
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
/* print a new line at the end */
putchar('\n');
}
