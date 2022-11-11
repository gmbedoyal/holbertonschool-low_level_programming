#include "function_pointers.h"
#include <stddef.h>
/**
 *int_index - a function that searches for an integer
 *@array: array of int
 *@size: size of array
 *@cmp: function for comparing values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return(-1);

	while (i < size)
	{
		if ((cmp)(array[i]))
		{
			return(i);
		}
		i++;
	}
	return(-1);
}
