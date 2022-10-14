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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		k = (((i*j) / 10));
			if (k >= 1)
			{
				_putchar(' ');
				_putchar(((i*j) / 10) + '0');
				_putchar(((i*j) % 10) + '0');
				if (j != 9)	
				{_putchar(',');}
			} 
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(((i*j) % 10) + '0');
				if (j != 9)
				{_putchar(',');}
			}
		}	
	_putchar('\n');
	}
}
