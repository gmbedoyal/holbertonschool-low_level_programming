#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node - function that adds a new node at the beginning of a list.
 *@head: pointer to pointer of the head of list
 *str: string
 *Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *first_to_2nd;

first_to_2nd = malloc(sizeof(list_t));

if (first_to_2nd == NULL)
{
	return (NULL);
}

first_to_2nd->str = strdup(str);
first_to_2nd->len = strlen(str);
first_to_2nd->next = *head;

*head = first_to_2nd;

return (first_to_2nd);
}
