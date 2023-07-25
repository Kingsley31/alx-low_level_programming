#include "main.h"

/**
 * puts2 - prints characters of a string but conseqeutively skipping
 * the next character in line
 *
 * @str: the string to print
 * Return:void
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != 0)
	{
		_putchar(str[count]);
		if (str[count + 1] == '\')
		{
			break;
		}
		count += 2;
	}
	_putchar('\n');
}
