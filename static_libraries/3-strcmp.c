#include "main.h"
/**
 * _strcmp - check code
 * @s1: destination string
 * @s2: source string
 * Return: comparison, character difference
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int k = 0;

	while (k == 0 && (s1[i] != 0))
	{
		k = (s1[i] - s2[i]);
		i++;
	}
return (k);
}

