#include "main.h"
/**
 * cap_string - check code
 * @s: pointer
 * Return: no return
 */

char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if ((s[i - 1]) == (32) /*|| " " || "," || "." || ";" || "!" || "?" || "\"" || "(" || ")" || "{" || "\t" || "\n" || "}" ) */ && s[i] >= 97)
	{
		s[i] = s[i] - 32;
	}
	i++;
}
return (s);
}

