#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main (void)
{
	char *w = "abcdefghijklmnopqrstuvwxyz";

	while (*w)
	{
		_putchar(*w);
		w++;
	}
	_putchar('\n');
return (0);
}
