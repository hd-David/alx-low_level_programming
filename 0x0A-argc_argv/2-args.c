#include <stdio.h>

/**
 * main - entry point of the prgram
 * @argv:  array of strings for parameters passed
 * @argc:  number of parameters
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
