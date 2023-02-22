#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
int count = 2;
unsigned long long a = 1, b = 2, c;
printf("1, 2, ");
while (count < 98)
{
c = a + b;
a = b;
b = c;
if (c > 0)
{
printf("%llu", c);
if (count < 97)
{
printf(", ");
}
count++;
}
}
printf("\n");
return (0);
}
