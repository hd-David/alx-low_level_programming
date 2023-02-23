#include "stdio.h"

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of the number
 */
unsigned long largest_prime_factor(unsigned long n)
{
unsigned long i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n /= i;
i--;
}
}
return (i);
}
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long largest = largest_prime_factor(n);
printf("%lu\n", largest);
return (0);
}
