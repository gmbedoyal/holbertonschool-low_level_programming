#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars
  *@size: size of array
  *@c: initial char
  *Return: NULL if size 0 or pointer null
  */

char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i = 0;

if (size == 0)
{
	return(NULL);
}

t = malloc(sizeof(*t) * size);

if (t == NULL)
	return(NULL);

while (i < size)
{	t[i] = c;
	i++;
}
return(t);

}
