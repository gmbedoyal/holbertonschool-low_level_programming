#include "main.h"
/**
 * string_toupper - check code
 * s: pointer
 * Return: no return
 */

char *string_toupper(char *s)
{
int i = 0;

while (s[i])
{
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
	i++;
}
return (s);
}

