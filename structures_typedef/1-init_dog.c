#include "dog.h"

/**
 * init_dog - initialize a variable of type struc dog
 * @dog *d: structure of task 0
 * @name: name
 * @age: float
 * @owner: pup parent 
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
