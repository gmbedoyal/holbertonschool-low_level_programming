#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: index starting 0
 * Return: the nth node of a dlistint_t linked list or NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 1;

	temp = head;

	while (i <= index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index > i)
		return (NULL);

	return (temp);
}
