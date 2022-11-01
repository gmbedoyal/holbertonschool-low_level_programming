#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *str_concat - a function that concatenates two strings
  *@s1: string 1
  *@s2: string 2
  *Return: NULL on pointer
  */

char *str_concat(char *s1, char *s2)
{
char *dup;
unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
unsigned int l = 0;

while (s1[i] != '\0')
{
	i++;
}

while (s2[j] != '\0')
{
	j++;
}

dup = malloc(sizeof(*s1) * (i + j) + 1);

if (dup == NULL)
{	
	return (NULL);
}

if (s1 == NULL)
{s1 = "";}

if (s2 == NULL)
{s2 = "";}

while (k < i)
{
dup[k] = s1[k];
k++;
}

while (l < j)
{
dup[k + l] = s2[l];
l++;
}

return (dup);

free(dup);

}
