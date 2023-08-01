#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: two dimentional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
