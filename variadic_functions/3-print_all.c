#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list c)
{
printf("%c", va_arg(c, int));
}

void print_i(va_list i)
{
printf("%d", va_arg(i, int));
}

void print_f(va_list f)
{
printf("%f", va_arg(f, double));
}

void print_s(va_list s)
{
char *str = va_arg(s, char *);
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

int i, j;

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


va_list imprimir;
va_start(imprimir, format);

/*if (!format)
	return NULL;*/
i = 0;

while (format[i] && format)
{	
j = 0;
	while (array[j].ch != NULL)
	{
	if (*(array[j].ch) == format[i])
		{
			array[j].f(imprimir);
			break;
		}
		j++;
	}
	i++;
}
va_end(imprimir);
printf("\n");
}
