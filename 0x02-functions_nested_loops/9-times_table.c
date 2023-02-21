#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i < 10; i++)
{
_putchar('0'); /* print the first digit */
for (j = 1; j < 10; j++)
{
_putchar(',');
_putchar(' ');
result = i * j;
if (result < 10)
_putchar(' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
