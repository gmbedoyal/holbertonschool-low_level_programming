#include "main.h"
#include <stdio.h>
/**
 *print_rev - check the code
 *@s: pointer
 *Return: length of strenght
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		i++;
	}

	j = i - 1;
	while (s[j] != 0)

	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
