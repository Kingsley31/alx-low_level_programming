#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of singlylinked list
 * @head: pointer to the head of the list
 * @n: data to be added to the new node
 * Return: pointer to the new element added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
