#include "main.h"
/**
 * reverse_array - check code
 * @a: pointer
 * @n: integer
 * Return: void
*/

void reverse_array(int *a, int n)
{
int i = 0;
int p;

while (i < ((n) / 2))
{
p = a[(n - 1) - i];
a[(n - 1) - i] = a[i];
a[i] = p;
i++;
}
}

