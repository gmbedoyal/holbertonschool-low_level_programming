#include "main.h"
/**
 *_puts - check the code
 *@str: pointer
 *Return: length of strenght
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
