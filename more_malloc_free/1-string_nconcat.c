#include "main.h"
#include <stdlib.h>

/**
 *_strlen - check the code
 *@s: pointer
 *Return: length of strenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

return (i);
}

/**
  *string_nconcat - concatenates two strings
  *@s1: char
  *@s2: char
  *@n: unsigned int
  *Return: a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str = NULL;
unsigned int i = 0;
unsigned int j = _strlen(s1) + n;
unsigned int k = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

str = malloc((j + 1) * sizeof(char));

if (str == NULL)
return (NULL);

for (; i < j - n ; i++)
{
	str[i] = s1[i];
}

for (; k < n ; k++)
{
	str[i + k] = s2[k];
}

return (str);
free(str);
}
