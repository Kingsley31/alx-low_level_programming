#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory of singly linked list
 * @head: point to the pointer of the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
