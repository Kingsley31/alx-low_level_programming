#include "main.h"

/**
 * more_numbers - prints from 0 to 14 10x
 * @void: takes nothing
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
