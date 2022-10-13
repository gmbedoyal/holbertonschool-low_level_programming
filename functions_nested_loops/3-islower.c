#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * islower - check the code
 * c - letra a evaluar
 * Return: 0 if uppercase, 1 if lowercase.
 */

int _islower(int c)
{
	int d = islower(c);

	if (d == 0) /*si la letra es minúscula*/
	{

		return (0);
	}
	else
		return (1);
}


