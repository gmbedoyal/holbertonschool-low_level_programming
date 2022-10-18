#include "main.h"
/**
 *_puts - check the code
 *@str: pointer
 *Return: length of strenght
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}	
}
