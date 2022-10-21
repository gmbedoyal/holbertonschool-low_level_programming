#include "main.h"
/**
 * _strncpy - check code
 * @dest: destination string
 * @src: source string
 * @n : integer
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (dest[i] != '\0')
{
	i++;
}

for (i = 0; i < n ; i++)
{
	dest[i] = src[i];
}

/*
for (; i < n; i++)
{
	dest[i] = '\0';
}
*/

return (dest);
}

