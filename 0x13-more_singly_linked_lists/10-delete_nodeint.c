#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the list based on
 * specified index.
 * @head: pointer to pointer of the first node
 * @index: index of the node to be deleted
 * Return: the 1 if success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
		return (-1);
	ptr = *head;
	if (ptr == NULL)
		return (-1);
	if (index == 0)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
		return (1);
	}
	while (ptr != NULL)
	{
		if ((count + 1) == index)
		{
			temp = ptr->next;
			ptr->next = ptr->next != NULL ? ptr->next->next : NULL;
			free(temp);
			return (1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}
