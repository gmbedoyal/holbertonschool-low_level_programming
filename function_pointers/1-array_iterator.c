#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - executes a function given on each element of an arr 
 *@array - array of int
 *@size - size of array
 *@action - function to point to
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		(action)(array[i]);
		i++;
	}

}
