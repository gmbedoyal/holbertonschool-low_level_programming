#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *traverse;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new_node;
	}
	return (new_node);
}
