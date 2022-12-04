#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to head of list
 * @idx: index where the new node should be added. Starts at 0
 * @n: data
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new = NULL;
unsigned int i = 1;

if (head == NULL)
	return (NULL);

new = (listint_t *) malloc(sizeof(listint_t));
if (new== NULL)
	return (NULL);
new->n = n;

if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

temp = (*head);
while (i < idx)
	{
	if (temp->next != NULL)
		{temp = temp->next;}
	else
		return (NULL);
	i++;
	}

new->next = temp->next;
temp->next = new;
	
return(new);
}
