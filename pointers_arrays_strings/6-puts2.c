#include "main.h"
#include <stdio.h>
/**
 *puts2 - check the code
 *@str: pointer
 *Return: length of strenght
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] > 0)
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
