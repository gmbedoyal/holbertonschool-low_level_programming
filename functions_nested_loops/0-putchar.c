#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *w = "_putchar";

	while (*w)
	{
		_putchar(*w);
		w++;
	}
	_putchar('a');
	_putchar('0');
	_putchar(48+7);
	_putchar('a');
	_putchar('\n');
return (0);
}
