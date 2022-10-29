#include <stdio.h>
#include <stdlib.h>
/**
  *main - check the code
  *@argc: integer
  *@argv: vector
  *Return: zero
  */

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("%d\n", 0);
	return (1);
	}

	int i = 0;

	for ( ; i < argc ; i++)
	{
		if (atoi(argv[i])/atoi(argv[i]) != 1)
			printf("Error\n");
		return(1);
	}

	int suma = 0;
	
	for (i = 1 ; i < argc ; i++)
	{
		suma += atoi(argv[i]);

	}
	printf("%d\n", suma);

return (0);
}
