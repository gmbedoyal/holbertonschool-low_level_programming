#include <stdlib.h>
#include <stdio.h>

/**
 * main - descripción de main
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i)
		{
			putchar (i);
			putchar(',');
			putchar(' ');
		}
return (0);
}
