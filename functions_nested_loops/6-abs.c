#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *_isabs - check the code
 *
 * @i: número a evaluar
 * Description - evaluate if alphabetic
 * Return: 0 always.
 */

int _abs(int i)
{
	_abs = abs(i); 

	if (_abs > 0)
	{	
	_putchar(_abs);
	}
	else
	return (0);
}
