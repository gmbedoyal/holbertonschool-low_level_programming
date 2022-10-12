#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main (void)
{	
	for (char w = *_putchar ; w != '\0'; w = *++_putchar)
	{
		putchar(w);
	}
	_putchar('\n');
return (0);
}
