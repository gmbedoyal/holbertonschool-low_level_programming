#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of a listint_t linked list.
 * @head: pointer to the pointer to head of list
 * @idx: index where the new node should be deleted. Starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *elim;
unsigned int i = 1;

if (head == NULL || *head == NULL)
	return (-1);

temp = (*head);
if (index == 0)
{
	*head = (*head)->next;
	free(temp);
}
else
{
	while (i < index)
	{
		if (temp->next != NULL)
			temp = temp->next;
			else
				return (-1);
	i++;
	}
}
elim = temp;
elim = elim->next;
temp->next = elim->next;

return (1);
}
