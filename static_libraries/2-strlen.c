#include "main.h"
#include <string.h>
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
