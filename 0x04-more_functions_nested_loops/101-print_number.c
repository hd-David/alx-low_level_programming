#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
int power = 1;
int num_digits = 1;
int i, digit;
if (n < 0)
{
_putchar('-');
n *= -1;
}
while ((n / power) >= 10)
{
power *= 10;
num_digits++;
}
for (i = 0; i < num_digits; i++)
{
digit = (n / power) % 10;
_putchar(digit + '0');
power /= 10;
}
}
