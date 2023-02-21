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
int i;
unsigned long num1 = 1, num2 = 2, sum;
printf("%lu, %lu", num1, num2);
for (i = 0; i < 48; i++)
{
sum = num1 + num2;
printf(", %lu", sum);
num1 = num2;
num2 = sum;
}
printf("\n");
return (0);
}
