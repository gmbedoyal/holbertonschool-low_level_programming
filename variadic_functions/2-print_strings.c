#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - function that print strings
 *@separator: string to be printed between numbers
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list pa;
unsigned int i;
va_start(pa, n);

for (i = 0 ; i < n; i++)
{
	if (pa != NULL)
	{
		if (separator == NULL || i == n - 1)
		printf("%s", va_arg(pa, char*));
		else
		printf("%s%s", va_arg(pa, char*), separator);
	}
	else
		printf("nil");
}
printf("\n");
va_end(pa);

}
