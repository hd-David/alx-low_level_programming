#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all passed args
 *@n: is the first args and used to find how args passed to the function
 *
 *Return: sum of the numbers pased to the functions.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list args;
int sum = 0, num;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
sum += num;

}
va_end(args);
return (sum);
}
