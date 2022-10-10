#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - descripción
 * return - 0 if 0, <0 if negative, >0 if positive
 **/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf("is negative");
	}
		else if (n=0);
	{
			printf("is zero");
	}
	else
	{
	printf("is positive");
	}
return (0);
}
