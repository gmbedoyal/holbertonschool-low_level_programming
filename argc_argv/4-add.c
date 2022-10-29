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
	int i;
	int suma = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
	return (1);
	}

	for (i = 0 ; i < argc ; i++)
	{
		if (atoi(argv[i])/atoi(argv[i]) != 1)
			printf("Error\n");
		return(1);
	}

	for (i = 1 ; i < argc ; i++)
	{
		suma += atoi(argv[i]);

	}
	printf("%i\n", suma);

return (0);
}
