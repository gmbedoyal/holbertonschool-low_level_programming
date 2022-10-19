#include "main.h"
#include <stdio.h>
/**
 *_puts - check the code
 *@str: pointer
 *Return: length of strenght
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != 0)
	{
		i++;
	}

	while (j < i/2)
	{
		_putchar(str[(i/2)+ j]);
		j++;
	}
	_putchar('\n');
}
