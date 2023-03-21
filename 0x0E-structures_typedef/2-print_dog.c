#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog: prints the members of the stuct dog
 * @d : pointer to the struct dog
 * Description: This function takes a pointer to a struct dog and prints out
 * its information in a specified format. If a member is NULL,
 * This function prints the members of a struct dog, including the dog's name,
 * age, and owner. If any of the members are NULL, it prints "(nil)" instead.
 * "(nil)" is printed
 * instead of its value.
 * Return: Always zero
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("nil\n");
}
if (d->owner == NULL)
{
printf("nil\n");
}
else
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner);

}
