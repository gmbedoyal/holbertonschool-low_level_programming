#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - a function that frees dogs
 *@dog_t: struct dog
 *@d: definition of struct
 *
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
