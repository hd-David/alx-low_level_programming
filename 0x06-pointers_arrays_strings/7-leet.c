#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
int i;
char leet_map[256] = {0};
char *leet_str = str;

/* Build the 1337 encoding map*/
leet_map['a'] = leet_map['A'] = '4';
leet_map['e'] = leet_map['E'] = '3';
leet_map['o'] = leet_map['O'] = '0';
leet_map['t'] = leet_map['T'] = '7';
leet_map['l'] = leet_map['L'] = '1';

/* Encode the string in-place*/
for (i = 0; str[i] != '\0'; i++)
{
if (leet_map[(int)str[i]])
{
str[i] = leet_map[(int)str[i]];
}
}

return (leet_str);
}
