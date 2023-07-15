#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int outer_num = '0';
	int comma = ',';
	int space = ' ';
	int new_line = '\n';

	while (outer_num < '9')
	{
		int inner_num = outer_num + 1;

		while (inner_num <= '9')
		{
			putchar(outer_num);
			putchar(inner_num);
			if((outer_num != '8') || (inner_num != '9'))
			{
				putchar(comma);
				putchar(space);
			}
			inner_num++;
		}
		outer_num++;
	}
	putchar(new_line);
	return (0);
}
