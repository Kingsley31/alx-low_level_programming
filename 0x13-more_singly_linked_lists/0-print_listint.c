#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of list int
 * @h: pointer to the first element on the list
 * Return: number of nodes in singly linked list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
