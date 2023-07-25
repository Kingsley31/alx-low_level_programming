#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int len = 1;

	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	while (*(s + len) != 0)
	{
		len++;
	}
	len -= 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
