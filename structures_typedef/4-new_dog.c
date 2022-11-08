#include "dog.h"
#include <stdlib.h>
/**
 *dog_t -
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

puppy = malloc(sizeof(dog_t));

if (puppy == NULL)
	return (NULL);

puppy->name = name;
puppy->age = age;
puppy->owner = owner;
return puppy;
}
