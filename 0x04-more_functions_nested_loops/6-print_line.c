#include "main.h"

/**
 * print_line - prints underscore n times
 *
 * @n: number of times you want print underscore
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
