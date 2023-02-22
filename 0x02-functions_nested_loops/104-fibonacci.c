#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main() {
int a = 1;
int b = 2;
int c;
int count = 0;
printf("%d, %d", a, b);
count += 2;
while (count < 98)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
count++;
}
printf("\n");
return 0;
}

