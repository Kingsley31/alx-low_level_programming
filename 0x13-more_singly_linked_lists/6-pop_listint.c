#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: pointer to the pointer of the first node of the list.
 * Return: the data of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr_first;
	listint_t *temp;
	int first_data;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	ptr_first = *head;
	first_data = ptr_first->n;
	temp = ptr_first->next;
	*head = temp;
	free(ptr_first);
	return (first_data);
}
