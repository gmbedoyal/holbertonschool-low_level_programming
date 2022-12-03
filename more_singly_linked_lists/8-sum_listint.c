#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
    int suma = 0;

    while(head)
    {
        suma += head->n;
        head = head->next;
    }
return(suma);
}
