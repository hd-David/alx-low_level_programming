#include <stdio.h>
#include <stdlib.h>

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
int foo, bar, result;

/* Check for correct number of arguments */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert command-line arguments to integers */
foo = atoi(argv[1]);
bar = atoi(argv[2]);

/* Calculate the product */
result = foo *bar;

/* Print the result */
printf("%d\n", result);

return (0);
}
