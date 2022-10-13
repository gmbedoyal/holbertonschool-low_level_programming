#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *print_sign - check the code
 *
 * @n: número a evaluar
 * Description - evaluate if alphabetic
 * Return: 1 if alphabetic, 0 if not.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
