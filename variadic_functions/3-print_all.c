#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list imprimir)
{
printf("%c", (char)va_arg(imprimir, int));
}

void print_i(va_list imprimir)
{
printf("%d", va_arg(imprimir, int));
}

void print_f(va_list imprimir)
{
printf("%f", (float)va_arg(imprimir, double));
}

void print_s(va_list imprimir)
{
char *str = va_arg(imprimir, char *);
	if (str)
	{
		printf("%s", str);
		return;
	}
printf("(nil)");
}

/**
 *print_all - function that print anything
 *@format: list of types of arguments  
 */

void print_all(const char * const format, ...)
{

typedef struct estructura 
{
	char *ch;
	void (*f)(va_list);
} estruc;

estruc array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
};

int i = 0;
int j = 0;

va_list imprimir;
va_start(imprimir, format);

/*if (!format)
	return NULL;*/

while (format[i] && format)
{	
	while (j < 4)
	{
	if (format[i] == array[j].ch)
		{
		array[i].f(imprimir);
		}
		j++;
		}
	i++;
}
printf("\n");
va_end(imprimir);
}
