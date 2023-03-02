#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to print
 */
void print_number(int n)
{
int i, j, digit, divisor, is_negative;

is_negative = n < 0;
divisor = 1;

/* Handle special case when n is 0 */
if (n == 0)
{
_putchar('0');
return;
}

/* Compute divisor */
while (n / divisor != 0)
{
divisor *= 10;
}
divisor /= 10;

/* Handle negative number */
if (is_negative)
{
_putchar('-');
n *= -1;
}

/* Print each digit */
for (i = divisor; i >= 1; i /= 10)
{
digit = (n / i) % 10;
_putchar(digit + '0');
}
}
