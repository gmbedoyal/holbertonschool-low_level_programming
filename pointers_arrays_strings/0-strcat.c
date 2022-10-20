#include "main.h"
/*
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}

for (j = 0; src[j] != '\0'; i++, j++)
{
	dest[i] = src[j];
}
dest[i] = '\0';

return(dest);
}

