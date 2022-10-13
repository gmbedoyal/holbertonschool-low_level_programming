#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * times_table - check the code
 *
 * Description - print last digit of a number
 * Return: last digit.
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	char l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = (i * j);
			l = (k);
			_putchar(l);
		}
	_putchar('\n');
	}
}
