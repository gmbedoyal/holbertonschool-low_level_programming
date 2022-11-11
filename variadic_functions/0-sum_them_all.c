#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of its parameters
 *@n: parameters *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list pa;
unsigned int i, suma = 0;

if (!n)
	return (0);

va_start(pa, n);

for (i = 0; i < n ; i++)
{
	suma += va_arg(pa, const unsigned int);
}

va_end(pa);

return (suma);
}
