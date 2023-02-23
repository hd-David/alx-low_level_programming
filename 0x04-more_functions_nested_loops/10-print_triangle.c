#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
int row, col;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (col < size - row - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
