#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the pointer to the first address of the string first character
 * Return: void
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != 0)
	{
		_putchar(*(str + counter) + '0');
		counter++;
	}
	_putchar('\n');
}
