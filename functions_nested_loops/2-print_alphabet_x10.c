#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char x;
	int y;
	for (y = '0'; y <= '9' ; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		_putchar ('\n');
		{
		_putchar(x);
		}
	}
	_putchar('\n');
}
