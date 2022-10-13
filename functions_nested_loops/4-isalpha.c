#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *_isalpha - check the code
 *
 * @c: letra a evaluar
 * Description - evaluate if alphabetic
 * Return: 1 if alphabetic, 0 if not.
 */

int _isalpha(int c)
{
	int d = isalpha(c);

	if (d == 0)
	{

		return (0);
	}
	else
		return (1);
}


