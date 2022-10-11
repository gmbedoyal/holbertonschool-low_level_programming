#include <stdlib.h>
#include <stdio.h>

/**
 * main - descripción de main
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	char alphabet = 'z';
	{
	while (alphabet >= 'a')
		printf("%c", alphabet--);
	}
	printf("\n");
return (0);
}
