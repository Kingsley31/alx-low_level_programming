#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data in a singly linked list
 * @head: pointer to the first node in the list
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
