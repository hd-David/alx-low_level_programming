#include "main.h"
#include <stdio.h>

/**
 * _puts - returns the string
 * @str: the string to output
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
