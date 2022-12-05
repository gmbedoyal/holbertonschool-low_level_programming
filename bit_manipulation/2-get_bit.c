#include "main.h"
#include <string.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
int result = 0;

result = (n >> index) & 1;

if (index > 10)
	return(-1);

return(result);
}
