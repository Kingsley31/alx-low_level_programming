#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the contents of a singlylinked list list_t
 * @h: first node of the list
 * Return: length of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
