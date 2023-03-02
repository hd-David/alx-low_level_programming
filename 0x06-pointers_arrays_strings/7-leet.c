#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char *letters = "aeotls";
char *leet = "430157";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
{
str[i] = leet[j];
break;
}
}
}
return (str);
}
