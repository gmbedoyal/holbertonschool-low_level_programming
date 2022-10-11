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
	char upper = 'A';
	{
	while (lower <= 'z')
		printf("%c", lower++);
	while (upper <= 'Z')
		printf("%c", upper++);
	}
	printf("\n");
return (0);
}
