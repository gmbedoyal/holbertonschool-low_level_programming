#include "main.h"
/**
 * leet - check code
 * @s: pointer
 * Return: no return
 */

char *leet(char *s)
{
int i = 0;
/*char[] = "43071"*/

while (s[i] != '\0')
{
	if ((s[i] == 97	|| s[i] == 65))
			{
			s[i] = 52;
			}
	else if ((s[i] == 101 || s[i] == 69))
			{
			s[i] = 51;
			}
	i++;
}
return (s);
}

