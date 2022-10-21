#include "main.h"
#include <string.h>
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
int j;

j = strlen(dest);

if (src[0] != '\0')
{	
	for (j = i; i < n ; i++, j++)
	{
		dest[j] = src[i];
	}

	dest[j+1] = '\0';
}
return (dest);
}

