#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
<<<<<<< HEAD

int main(void)
{
int count = 2;
unsigned long long a = 1, b = 2, c;
printf("1, 2, ");
=======
int main() {
int a = 1;
int b = 2;
int c;
int count = 0;
printf("%d, %d", a, b);
count += 2;
>>>>>>> 62d565ba24039267b2342fda0ca545b11fc47f66
while (count < 98)
{
c = a + b;
a = b;
b = c;
<<<<<<< HEAD
if (c > 0)
{
printf("%llu", c);
if (count < 97)
{
printf(", ");
}
count++;
}
=======
count++;
>>>>>>> 62d565ba24039267b2342fda0ca545b11fc47f66
}
printf("\n");
return 0;
}

