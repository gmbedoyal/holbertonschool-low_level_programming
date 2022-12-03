#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 * @h: pointer to head
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
