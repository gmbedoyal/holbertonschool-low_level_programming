#include "main.h"
#include <stdio.h>
/**
 *rev_string - check the code
 *@s: pointer
 *Return: length of strenght
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *alreves = NULL;

	while (s[i] != 0)
	{
		i++;
	}

	j = i - 1;
	
	while (s[j] != 0)
	{
		for (i = 0; s[j] != 0 ; i++)
		{
			*alreves = s[j];
			s[i] = *alreves;
		}
		j--;
	}

}
