#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - a function that returns a pointer to a 2 dimensional array of integers
  *@width: ancho
  *@height: alto
  *Return: NULL on failure
  */

int **alloc_grid(int width, int height)
{
int **gr;
int i = 0;

if (width <= 0 || height <= 0)
return (NULL);

gr = malloc(sizeof(int *) * height);
if (gr == NULL)
{
	return (NULL);
}

while (i < height)
{
	gr[i] = malloc(sizeof(int) * width);
		i++;
if (gr[i] == NULL)
	return(NULL);
}
return (gr);
}
