#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: Creates a new dog struct and initializes
 * its name, age, and owner
 * fields with the given parameters. Copies of the name and
 * owner strings are stored
 * in the struct.
 *
 * Return: a pointer to the new dog struct, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

/* Allocate memory for the new dog struct */
new_dog = malloc(sizeof(dog_t));

/* Check if malloc succeeded */
if (new_dog == NULL)
return (NULL);
/* Allocate memory for the name and owner strings */
new_dog->name = malloc(strlen(name) + 1);
new_dog->owner = malloc(strlen(owner) + 1);

/* Check if malloc succeeded */
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
/* Copy the name and owner strings to the newly allocated memory */
strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
