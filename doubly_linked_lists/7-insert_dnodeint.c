#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head of list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
return (i);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to head of list
 * @idx: index where to insert node, starts at 0
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 2;
	size_t lenght;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	lenght = dlistint_len(*h);
	if (idx == lenght - 1)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (i <= idx)
	{
		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->prev = new_node;

return (new_node);
}
