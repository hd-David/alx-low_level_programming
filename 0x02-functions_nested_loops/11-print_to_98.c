#include "main.h"
#include <stdio.h>
/*
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: the number to start counting from.
 *
 * Return: void.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (int i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
}
