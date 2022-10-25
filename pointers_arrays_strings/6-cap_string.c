#include "main.h"
/**
 * cap_string - check code
 * @s: pointer
 * Return: no return
 */

char *cap_string(char *s)
{
int i = 0;
char j;
while (s[i] != '\0')
{
	j = s[i - 1];
	if ((j == 32
			|| j == 44
			|| j == 46
			|| j == 59
			|| j == 33
			|| j == 63
			|| j == 22
			|| j == 40
			|| j == 41
			|| j == 123
			|| j == '\t'
			|| j == '\n'
			|| j == 125) && (s[i] >= 97))
	{
		s[i] = s[i] - 32;
	}
	i++;
}
if (s[0] >= 97)
{s[0] -= 32; }
return (s);
}

