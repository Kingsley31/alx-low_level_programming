#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to the first node.
 * @index: index of the node to return.
 * Return: node that falls within index or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *correct_node = NULL;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			correct_node = ptr;
			return (correct_node);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
