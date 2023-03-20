#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a character array that represents the dog's name
 * @age: a float value that represents the dog's age
 * @owner: a pointer to a character array that represents the dog's owner
 *
 * Description: This structure contains information about a dog, including its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Function prototypes */
void print_dog(dog_t *d);

#endif /* DOG_H */
