#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp->next != NULL)
		{
			temp = temp->next;
			free(temp);
		}
}
