#include "main.h"
#include <stdio.h>
/**
 *rev_string - check the code
 *@s: pointer
 *Return: length of strenght
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp[1] = "0";/*string temporal*/
	char *alderecho = &temp[0]; /*pointer a la dirección del string temporal*/

	while (s[i])
	{
		i++; /*contar longitud string*/
	}

	for (j = 0; j < (i + 1) / 2 ; j++)
	{
		char *alreves = &s[j]; /*pointer con la direccion de s0*/
		*alderecho = s[j]; /*asigno s0 al temporal*/
		*alreves = s[i - (j + 1)]; /*llevo si-1 a s0*/
		s[i - (j + 1)] = alderecho[0]; /*llevo s0 a si-1*/
	}
}
