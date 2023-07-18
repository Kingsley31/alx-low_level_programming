#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 10;

	while (count <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
