#include "main.h"
/**
 *print_rev - check the code
 *@str: pointer
 *Return: length of strenght
 */

void _puts(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
