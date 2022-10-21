#include "main.h"
/**
 * _strcmp - check code
 * @s1: destination string
 * @s2: source string
 * Return: comparison, character difference
 */

int _strcmp(char *s1, char *s2)
{
int i;
int j = 0;
int k = 0;

for (i = 0; i < (s1[i] != '\0') ; i++)
{
	j = j + (s1[i]);
}

for (i = 0; i < (s2[i] != '\0') ; i++)
{
	k = k + s2[i];
}

return (j - k);
}

