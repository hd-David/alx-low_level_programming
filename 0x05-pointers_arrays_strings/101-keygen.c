#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme program
 *
 * Return: 0 on success
 */
int main(void)
{
  int i;
  char password[100];

  srand(time(NULL));

  for (i = 0; i < 100; i++)
    {
      /* generate a random character between '!' and '~'*/
      password[i] = '!' + rand() % ('~' - '!' + 1);
    }

  printf("%s\n", password);

  return 0;
}
