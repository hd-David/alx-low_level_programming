#include "dog.h"

#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog struct
 * @d: pointer to the dog struct
 *
 * Description: Frees the memory allocated for the name and
 * owner strings of the
 * dog struct pointed to by d, as well as the memory
 * allocated for the struct itself.
 */
void free_dog(dog_t *d)
{
/* Free the memory allocated for the name and owner strings */
free(d->name);
free(d->owner);

/* Free the memory allocated for the dog struct */
free(d);
}
