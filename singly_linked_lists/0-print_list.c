#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - a function that prints all the elements of a list_t list.
 *@h - pointer to the head of list
 */

size_t print_list(const list_t *h)
{	
int i = 0;

while (h != NULL)
{
	if (h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	h = h->next;
	i++;
}
return(i);
}
