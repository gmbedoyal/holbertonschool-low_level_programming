#include "main.h"
#include <stdlib.h>

/**
  *_calloc: allocates memory for an array, set to zero
  *@size: data type
  *@nmemb: elements
  *Return: NULL if size 0 or pointer null
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i = 0;

if (size == 0 || nmemb == 0)
{
	return (NULL);
}

array = malloc(nmemb * size);

if (array == NULL)
	return (NULL);

while (i < nmemb)
{	array[i] = 0;
	i++;
}
return (array);

}
