#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
int length = 0;
int i;
/* calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
/* print the string in reverse */
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}

/* print a newline character to end the output */
putchar('\n');
}
