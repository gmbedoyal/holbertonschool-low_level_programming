#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	printf("%d", i);
	
	for (i = i - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}

}
