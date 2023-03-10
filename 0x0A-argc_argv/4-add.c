#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int results = 0, i, j;

/* Check if no arguments are passed */
if (argc == 1)
{
printf("0\n");
return (0);
}

/* Loop through the arguments and add positive numbers */
for (i = 1; i < argc; i++)
{
/* Loop through the characters of the argument */
for (j = 0; argv[i][j]; j++)
{
/* Check if character is a digit */
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

/* Add the number to the sum */
results += atoi(argv[i]);
}

/* Print the sum */
printf("%d\n", results);

return (0);
}
