#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
 
void print_alphabet (void)
{
	char x = "a";

	while (x <= "z")
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
return (0);
}
