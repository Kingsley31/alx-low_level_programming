#include "main.h"

/**
 * puts_half - prints second half of a string characters
 * @str: string to print the second half characters
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int count = 0;

	while (*(str + len) != 0)
	{
		len++;
	}
	len -= 1;
	count = len / 2;
	if (len % 2 != 0)
	{
		count = (len - 1) / 2;
	}
	while (*(str + count) != 0)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
