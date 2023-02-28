#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
/* calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
/* reverse the string */
for (i = 0; i < length / 2; i++)
{
/* swap the characters at positions i and length-i-1 */
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
