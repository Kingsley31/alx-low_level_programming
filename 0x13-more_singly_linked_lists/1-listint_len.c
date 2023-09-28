#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - rteurns the number of elements in a singly linked list
 * @h: pointer to the first node in the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
