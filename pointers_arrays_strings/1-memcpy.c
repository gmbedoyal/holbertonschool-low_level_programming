#include "main.h"
/**
  *_memcpy - check the code
  *@dest: destination string
  *@src: source string
  *@n: unsigned int
  *Return: returns a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
