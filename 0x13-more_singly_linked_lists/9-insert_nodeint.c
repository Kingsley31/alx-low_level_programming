#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a particular index
 * @head: pointer to the pointer of the first node.
 * @idx: index of the list where new node is to be inserted.
 * @n: data of the new node.
 * Return: address of the new node or NULL if it fails or index doesn't exist.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node;
	listint_t *current_idxn;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	if (idx == 0)
	{
		current_idxn = *head;
		new_node->next = current_idxn;
		*head = new_node;
		return (new_node);
	}
	while (ptr != NULL)
	{
		if ((count + 1) == idx)
		{
			current_idxn = ptr->next;
			new_node->next = current_idxn;
			ptr->next = new_node;
			return (new_node);
		}
		count++;
		ptr = ptr->next;
	}
	free(new_node);
	return (NULL);
}
