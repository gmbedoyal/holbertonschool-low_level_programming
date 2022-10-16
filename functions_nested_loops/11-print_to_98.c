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
	int i = 0, j, m, l, dig = 0, k;

	while( n != 0 ) {n /= 10;
       dig++;}
	if (dig <= 2) 
	{
		if (n <= 98)
		{
		while (i < (99 - n))
		{	
			j = (n + i);
			m = (((j) / 10));
			l = (((j) % 10));
			if (m > 0)
			{
			_putchar(m + '0');}
			_putchar(l + '0');
			if (j != 98) {
			_putchar(','),
			_putchar(' ');}
			i++;
		}
		}
		else
		{
			while (i < (n - 97))
			{	
			j = (n - i);
			m = (((j) / 10));
			l = (((j) % 10));
			_putchar(m + '0');
			_putchar(l + '0');
			if (j != 98) {
			_putchar(','),
			_putchar(' ');}
			i++;
			}
		}
	}
	else
	{
		if (n <= 98)
		{
		while (i < (99 - n))
		{	
			j = (n + i);
			k = (((j) / 100));
			m = (((j) / 10));
			l = (((j) % 10));
			if (m > 0)
			{
				_putchar(k + '0');
				_putchar(m + '0');
				_putchar(l + '0');}
			if (j != 98) {
			_putchar(','),
			_putchar(' ');}
			i++;
		}
		}
		else
		{
		while (i < (n - 97))
		{	
			j = (n - i);
			k = (((j) / 100));
			m = (((j) / 10));
			l = (((j) % 10));
			_putchar(k + '0');
			_putchar(m + '0');
			_putchar(l + '0');
			if (j != 98) {
			_putchar(','),
			_putchar(' ');}
		}
		}
	}
}
