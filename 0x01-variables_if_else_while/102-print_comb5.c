#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int first = '0', comma = ',', space = ' ', new_line = '\n';

	while (first <= '98')
	{
		int second = first + '1';

		while (second <= '99')
		{
			if (first <= '9')
				putchar('0');
			putchar(first);
			putchar(space);
			if (second <= '9')
				putchar('0');
			putchar(second);
			if (first != '98' || second != '99')
			{
				putchar(comma);
				putchar(space);
			}
			second++;
		}
		first++;
	}
	putchar(new_line);
	return (0);
}
