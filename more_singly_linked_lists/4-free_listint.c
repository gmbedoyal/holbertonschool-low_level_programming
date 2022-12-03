#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *free_listint - a function that frees a listint_t list.
 *@head: pointer of the head of list
 */

void free_listint(listint_t *head)
{
	listint_t *check_node;

while (head != NULL)
{
	check_node = head;
	head = head->next;
	free(check_node);
}
}
