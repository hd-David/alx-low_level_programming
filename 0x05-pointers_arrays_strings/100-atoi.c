#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value represented by the string, or 0 if there are no digits in the string
 */

int _atoi(char *s)
{
unsigned int count = 0, size = 0, m = 1, i;
int result = 0;

while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;

if (*(s + count) == '-')
m *= -1;

if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}

for (i = count - size; i < count; i++)
{
result = result + ((*(s + i) - 48) * m);
m /= 10;
}
return result;
}
