#include "main.h"
/**
 * string_toupper - check code
 * *: pointer
 * Return: no return
 */

char *string_toupper(char *)
{
int i = 0;

while (str[i])
{
	if (97 <= str[i]  <= 122)
	{
		str[i] = str[i] - 32;
	}
	i++;
}

}

