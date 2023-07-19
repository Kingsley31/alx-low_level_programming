#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int col = 0;

		while (col <= 9)
		{
			int num = row * col;

			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else if (num < 10)
				_putchar(num + '0');
			if (col < 9)
			{
				_putchar(',');
			}
			if (((row * (col + 1)) > 9) && col < 9)
				_putchar(' ');
			else if (((row * (col + 1)) < 10) && col < 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (col == 9)
				_putchar('\n');
			col++;
		}
		row++;
	}
}
