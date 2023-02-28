#include "main.h"
#include <stdio.h>


/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int count = 0, i;
while (str[count] != '\0')
{
count++;
}
if (count % 2 == 1)
i = count / 2;
else
i = (count - 1) / 2;
for (i++; i < count; i++)
putchar(str[i]);
putchar('\n');
}
