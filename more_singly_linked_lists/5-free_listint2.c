#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *free_listint2 - a function that frees a listint_t list (head to null)
 *@head: pointer to pointer of the head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *check_node;

while (*head != NULL)
{
	check_node = (*head);
	(*head) = (*head)->next;
	free(check_node);
}
*head = NULL;
}
