#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev = 1, curr = 2, next = 0, sum = 0;
while (curr <= 4000000)
{
if (curr % 2 == 0)
sum += curr;
next = prev + curr;
prev = curr;
curr = next;
}
printf("%ld\n", sum);
return (0);
}
