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
	int i = 0, j, m, l; 
	int k = 0;
	int o = 0;

	if (n <= 98)
		{
		while (i < (99 - n))
		{	j = (n + i);/*Imprime*/ 
			k = (((j) / 100)); /*3 cifras, 1 cifra*/
			o = (((j) / 10) - 10); //3 cifras, 2 cifra 
			m = (((j) / 10)); // 2 cifras, 1 cifra
			l = (((j) % 10)); //última cifra
			if (m > 0)
			{
			_putchar(m + '0');
			_putchar(l + '0');}
			if (j != 98) { //no imprimir ultima coma
			_putchar(',');
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
			_putchar(k + '0');
			_putchar(o + '0');
			_putchar(l + '0');
			if (j == 98) {
			_putchar(','),
			_putchar(' ');}
			i--;
			}
		}
}
