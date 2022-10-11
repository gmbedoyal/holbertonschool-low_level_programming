#include <stdlib.h>
#include <stdio.h>

/**
 * main - descripción de main
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	char lower = 'a';
	char upper = 'f';
	char final = 'r';
	{
	while (lower <= 'd')
		printf("%c", lower++);
	while (upper <= 'p')
		printf("%c", upper++);
	while (final <= 'z')
		printf("%c", final++);
	}
	printf("\n");
return (0);
}
