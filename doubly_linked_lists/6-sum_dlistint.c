#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: returns the sum of all the data (n) of a dlistint_t linked list.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int suma = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp->next != NULL)
	{
		suma += temp->n;
		temp = temp->next;
	}
	suma += temp->n;

	return (suma);
}
