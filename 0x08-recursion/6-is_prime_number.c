#include "main.h"

/**
 * is_prime_number - checks if an integer is prime recursively
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - helper function for is_prime_number
 * that recursively checks if
 * an integer is prime by dividing it by
 * integers between 2 and n-1
 * @n: the integer to check
 * @divisor: the current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
if (divisor == 1)
{
return (1);
}
else if (n % divisor == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, divisor - 1));
}
}
