#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i = 0;

if (size == 0)
{
	return(NULL);
}

t = malloc(sizeof(*t) * size);

while (i < size)
{	t[i] = c;
	i++;
}
return(t);

}
