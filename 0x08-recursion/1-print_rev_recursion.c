#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*(s - 1);
}
