#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node_end - a function that adds a new node at the end of a list_t list
 *@head: pointer to pointer of the head of list
 *@str: string
 *Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *end_node;

end_node = malloc(sizeof(list_t));

if (end_node == NULL)
{
	return (NULL);
}

end_node->str = strdup(str);
end_node->len = strlen(str);

if (*head == NULL)
	*head = end_node;
else
{
new_node = *head;
while (new_node->next != NULL)
	new_node = new_node->next;
new_node->next = end_node;
}
return (end_node);
}
