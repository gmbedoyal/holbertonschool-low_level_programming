#include "main.h"
#include <stdlib.h>

/**
  *array_range - a function that creates an array of int, sorted.
  *@min: min value
  *@max: max value
  *Return: pointer
  */

int *array_range(int min, int max)
{
int *sorted;
int i = 0;
if (min > max)
	return (NULL);

sorted = malloc(sizeof(int) * (max - min));

for (; i < (max - min) + 1 ; i++)
{
	sorted[i] = min + i;
}
return (sorted);
}
