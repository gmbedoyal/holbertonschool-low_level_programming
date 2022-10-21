#include "main.h"
/**
 * _strcmp - check code
 * @s1: destination string
 * @s2: source string
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;

while (s1[i] != '\0')
{
	i++;
}

while (s2[j] != '\0')
{
	j++;
}

return (i - j);
}

