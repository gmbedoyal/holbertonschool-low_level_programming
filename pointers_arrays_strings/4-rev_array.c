#include "main.h"
/**
 * reverse_array - check code
 * @*a: pointer
 * @n: integer
 * Return: void
*/

void reverse_array(int *a, int n)
{
int i = 0;
int p;

while (i < n / 2)
{
p = a[n - i];
a[n - i] = a[i];
a[i] = p;
}
}

