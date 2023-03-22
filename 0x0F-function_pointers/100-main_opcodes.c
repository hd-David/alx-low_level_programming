#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success, 1 on wrong number of arguments, 2 on negative bytes
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *main_ptr = (char *)main;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

for (i = 0; i < bytes - 1; i++)
printf("%02hhx ", main_ptr[i]);

printf("%02hhx\n", main_ptr[i]);

return (0);
}
