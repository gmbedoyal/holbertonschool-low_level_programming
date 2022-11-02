#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid previously created
  *@grid: 2D array
  *@height: filas
  *Return: void, no return
  */

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
