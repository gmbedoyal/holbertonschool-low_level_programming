#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of list
 * @index: index of the node, starting at 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;
if ((head) == NULL)
	return (0);

temp = head;
while (i < index)
	{
	if (temp->next != NULL)
		temp = temp->next;
	else
		return (NULL);
	i++;
	}
return (temp);
}
