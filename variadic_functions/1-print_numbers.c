#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function that print numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pa;
unsigned int i;
va_start(pa, n);

for (i = 0 ; i < n; i++)
{
if (separator == NULL || i == n - 1)
printf("%d", va_arg(pa, const unsigned int));
else
printf("%d%s", va_arg(pa, const unsigned int), separator);
}

printf("\n");
va_end(pa);
}
