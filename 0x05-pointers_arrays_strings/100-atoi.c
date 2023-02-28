#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int i, sign, num;

i = sign = num = 0;

/* Ignore leading whitespace */
while (s[i] == ' ')
i++;

/* Determine the sign of the number */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
sign = 1;
i++;
}

/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}

/* Apply sign to the integer */
num *= sign;

return (num);
}
