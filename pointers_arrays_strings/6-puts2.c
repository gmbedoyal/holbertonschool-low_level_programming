#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - check the code
 *@str: pointer
 *Return: length of strenght
 */

void puts2(char *str)
{
	int i = 0;

	while (i < (int)strlen(str))
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
