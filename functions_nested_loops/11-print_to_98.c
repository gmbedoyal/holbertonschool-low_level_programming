#include "main.h"
#include <ctype.h>

/**
 * add - check the code
 * @i - valor a
 * @j - valor b
 * Description i -
 * Descripction j -
 * Description - print last digit of a number
 * Return: last digit.
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{	
		_putchar(n + '0');
	}
	else if (n < 98)
	{
		for (i = n; i < 98 ; i++)
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
	}
	else
		for (i = n; i > 98 ; i--)
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
}
