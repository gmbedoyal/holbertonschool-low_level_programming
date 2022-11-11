#include <stdlib.h>
#include <stdio.h>

/**
  *_strdup - creates an array of chars
  *@str: string
  *Return: NULL if size 0 or pointer null
  */

char *_strdup(char *str)
{
char *dup;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
{
	return (NULL);
}

while (str[i] != '\0')
{
	i++;
}

dup = malloc(sizeof(*str) * i + 1);

if (dup == NULL)
{
	free(dup);
	return (NULL);
}

while (j < i)
{
dup[j] = str[j];
j++;
}
return (dup);
}
#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - pointer
 *@name: name
 *@age: age
 *@owner: owner
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

puppy = malloc(sizeof(dog_t));

if (puppy == NULL)
{
	free(puppy);
	return (NULL);
}
puppy->name = _strdup(name);
if (puppy->name == NULL) 
{
free(puppy);
return (NULL);
}
puppy->age = age;
puppy->owner = _strdup(owner);
if (puppy->owner == NULL)
{
free(puppy->name);
free(puppy);
return (NULL);
}
return (puppy);
}
