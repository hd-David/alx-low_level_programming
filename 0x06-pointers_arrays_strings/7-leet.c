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
char *letters = "aeotlAEOTL";
char *leet = "4307104310";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j];
break;
}
}
}
return (str);
}
