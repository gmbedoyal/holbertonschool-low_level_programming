#include "main.h"
/**
 * _strncat - check code
 * @dest: destination string
 * @src: source string
 * @n : integer
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}

for (j = 0; j < n ; i++, j++)
{
	dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

