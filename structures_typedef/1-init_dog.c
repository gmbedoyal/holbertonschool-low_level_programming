#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type "struc dog"
 * @dog: structure set on task 0
 * @d: pointer to struct
 * @name: name
 * @age: float
 * @owner: pup parent
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
