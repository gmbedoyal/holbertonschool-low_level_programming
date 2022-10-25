#include "main.h"
/**
  *_memset - check the code
  *@s: pointer
  *@b: character
  *@n: unsigned int
  *Return: returns a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
