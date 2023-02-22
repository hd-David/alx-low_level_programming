#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 98;
int a = 1, b = 2;
int i, c;
printf("%d, %d", a, b);
for (i = 3; i <= n; i++)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
