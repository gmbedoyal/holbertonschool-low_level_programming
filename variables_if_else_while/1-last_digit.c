#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - descripción de main
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 5 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 5);
	}
	else if (n % 100 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 100);
	}
	else
{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 5);
	}
return (0);
}
