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
	int j;
	int k;

	if (n < 98)
		while (n < 98)
			k = 1;
			j = 98 - k;
			i = 98 - j;
			k++;
			_putchar(i + '0');

	if (n > 98)
		while (n >= 98)
			_putchar('0');

}
