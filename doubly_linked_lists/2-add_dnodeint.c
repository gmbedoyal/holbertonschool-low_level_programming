#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to pointer to head of list
 * @n: data
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *temp;

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
	return (NULL);

/*if (*head == NULL)
	return(NULL);*/

temp->n = n;

temp->next = *head;
temp->prev = NULL;
*head = temp;

return(temp);
}
