#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m;

for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i >= size_r || j >= size_r)
return (0);
r[size_r - 1] = '\0';
for (i--, j--, k = size_r - 2, l = 0; k >= 0; i--, j--, k--)
{
if (i >= 0)
m = n1[i] - '0';
else
m = 0;
if (j >= 0)
m += n2[j] - '0';
m += l;
if (m > 9)
{
l = 1;
m -= 10;
}
else
l = 0;
r[k] = m + '0';
}
if (l == 1)
{
if (size_r == 1)
return (0);
for (i = size_r - 2; i >= 0; i--)
r[i + 1] = r[i];
r[0] = '1';
return (r);
}
return (r + size_r - i - j - 2);
}
