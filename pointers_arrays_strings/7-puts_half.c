#include "main.h"
/**
 *puts_half - check the code
 *@str: pointer
 *Return: length of strenght
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	while (*str)
	{
		_putchar(*str + ( i / 2) + '0');
		str++;
	}
_putchar('\n');
}
