#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_last_digit - check the code
 *
 * @i: número a evaluar
 * Description - print last digit of a number
 * Return: last digit.
 */

int print_last_digit(int i)
{
	int j = (i % 10);
	int k = (j*(-1));
	if (j >= 0)
	{
		_putchar('0'+j);
	}
	else
	{
		_putchar('0'+k);
	}
return(k);
}
