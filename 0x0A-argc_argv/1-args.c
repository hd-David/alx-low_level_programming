#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of cl arguments passed to the program
 * @argv: an array of strings containing the cl arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)*argv;
printf("%d\n", argc - 1);
return (0);
}
