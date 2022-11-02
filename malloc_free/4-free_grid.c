#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - a function that returns a pointer to a 2D array of ints
  *@width: ancho
  *@height: alto
  *Return: NULL on failure
  */

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
	{
		while (i >= 0)
		{
			free(grid[i]);
			i--;
		}
		free(grid);
	}
}
}
