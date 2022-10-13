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

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}	
}
