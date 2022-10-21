#include "main.h"
/**
 * _strncopy - check code
 * @dest: destination string
 * @src: source string
 * @n : integer
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}

for (j = 0; j < n && src[i] != '\0'; j++)
{
	dest[j] = src[j];
}

for (; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}

