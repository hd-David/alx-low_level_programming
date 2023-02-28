#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value represented by the string, or 0 if there are no digits in the string
 */
int _atoi(char *s)
{
int i = 0;
int num = 0;
int sign = 1;

while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return sign * num;
}
