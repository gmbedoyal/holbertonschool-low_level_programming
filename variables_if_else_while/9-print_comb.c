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

	for (i = '0'; i <= '8'; i++)
		if (i)
		{
			putchar (i);
			putchar(',');
			putchar(' ');
		}
	for (i = '9'; i <= '9'; i++)
		{
		putchar (i);
		}
return (0);
}
