#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - descripción (success)
 * return - 0 if 0, <0 if negative, >0 if positive
 **/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
return (0);
}
