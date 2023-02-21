#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, fib[50];
fib[0] = 1;
fib[1] = 2;
printf("%d, %d", fib[0], fib[1]);
for (i = 2; i < 50; i++) {
fib[i] = fib[i - 1] + fib[i - 2];
printf(", %d", fib[i]);
}
printf("\n");
return 0;
}
