#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
/* Suppress unused variable warning */
(void)argc;

/* Print the program name */
printf("%s\n", argv[0]);

return (0);
}
