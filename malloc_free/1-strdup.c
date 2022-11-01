#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_strdup - creates an array of chars
  *@str: string
  *Return: NULL if size 0 or pointer null
  */

char *_strdup(char *str)
{
char *dup;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
{
	return (NULL);
}

while (str[i] != '\0')
{
	i++;
}

dup = malloc(sizeof(*str * i) + 1);

while (j < i)
{
dup[j] = str[j];
j++;
}
return (dup);

if (dup == NULL)
	return (NULL);

free(dup);

}
