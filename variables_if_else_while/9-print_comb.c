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
		}
	for (i = '9'; i <= '9'; i++)
		{
		putchar (i);
		}
	putchar ('\n');
return (0);
}
