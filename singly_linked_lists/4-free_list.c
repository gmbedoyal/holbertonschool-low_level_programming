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
    list_t *next_node;

    check_node = head;

while (check_node != NULL)
{   
    next_node = check_node->next;
    free(check_node);
    check_node = next_node;
}

if (next_node->next == NULL)
free(next_node);

}
