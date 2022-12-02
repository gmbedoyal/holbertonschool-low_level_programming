#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *free_list - a function that frees a list_t list.
 *@head: pointer to pointer of the head of list
 */

void free_list(list_t *head)
{
    list_t *check_node;

while (head != NULL)
{   
	check_node = head;
	head = head->next;
	free(check_node);
}
}
