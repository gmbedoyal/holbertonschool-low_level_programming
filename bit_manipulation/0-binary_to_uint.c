#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input binary number in the form of a string of 0's & 1's
 * Return: the converted number or 0 if b NULL or not 0-1
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int index = 0;
int potencia = 1;

if (!b)
    return (0);

index = strlen(b) - 1;

while (index >= 0)
{
    if (b[index] != '0' && b[index] != '1')
        return(0);
    
    result += (b[index] - '0') * potencia;
    potencia *= 2;
    index--;
}

return (result);
}
