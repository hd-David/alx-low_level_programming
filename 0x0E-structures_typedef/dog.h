#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a character array that represents the dog's name
 * @age: a float value that represents the dog's age
 * @owner: a pointer to a character array that represents the dog's owner
 *
 * Description: This structure contains information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;


/* Function prototypes */
void free_dog(dog_t *d)
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(dog_t *d);
void init_dog(struct dog_t *d, char *name, float age, char *owner);
#endif /* DOG_H */
