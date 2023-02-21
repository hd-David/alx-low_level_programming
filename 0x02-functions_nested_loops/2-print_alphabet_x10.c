#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
*/
void print_alphabet_x10(void);
/**
 * print_alphabet - prints the alphabet in lowercase
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
