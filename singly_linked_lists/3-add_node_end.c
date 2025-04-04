#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Custom implementation to calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
size_t len = 0;

while (str[len] != '\0')
{
len++;
}
{return (len); }
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{return (NULL); }

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
{return (NULL); }
}

new_node->len = _strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
}
{return (new_node); }
}
