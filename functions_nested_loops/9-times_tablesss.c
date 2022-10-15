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
	int m; /*primer digito*/
	int n; /*segundo digito*/

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		
		m = (((i*j) / 10));
		n = (((i*j) % 10));
			if (i == 0)
				{
					if (j == 0)
					{
						_putchar('n');
						_putchar (',');
					else
					{	
						if (j != 0)
						{
							_putchar(' ');
							_putchar(' ');
							_putchar('n');
							_putchar(',');
						if (j != 9)	
							{
								_putchar(',');
							}
						}
					}
					}	
				}
			if (i != 0)
			{
				if (j == 0)
					{
						_putchar('n');
						_putchar (',');
					}
			else
			{
				if ((m % 10) == 0)
				{	_putchar(' ');
					_putchar (' ');
					_putchar(n + '0');
					_putchar(',');
					else
					{
					_putchar (' ');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar(',');
					}
				}

			}
			}
	_putchar('\n');
	}
}
