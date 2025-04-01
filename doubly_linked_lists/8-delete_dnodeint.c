#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)
{return (-1); }
if (index == 0)
{
*head = temp->next;
if (*head)
(*head)->prev = NULL;
free(temp);
{return (1); }
}
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{return (-1); }
if (temp->next)
temp->next->prev = temp->prev;
if (temp->prev)
temp->prev->next = temp->next;
free(temp);
{return (1); }
}
