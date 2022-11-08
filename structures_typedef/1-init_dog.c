#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struc dog
 * @d: pointer to struct
 * @name: name
 * @age: float
 * @owner: pup parent
 * Return - void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	d->name = '\0';
	d->age = '\0';
	d->owner = '\0';
}
d->name = name;
d->age = age;
d->owner = owner;
}
