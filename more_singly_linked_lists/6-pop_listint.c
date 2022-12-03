#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head of a linked list
 *@head: pointer to pointer of the head of list
 *Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{

int n;

listint_t *check_node;

if ((*head) == NULL)
	return (0);

check_node = (*head); /*no entiendo pq los paréntesis*/
(*head) = (*head)->next;
n = check_node->n;
free(check_node);

return (n);
}
