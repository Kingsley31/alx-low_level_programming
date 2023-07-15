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

	while (outer_num <= '7')
	{
		int inner_outer_num = outer_num + 1;

		while (inner_outer_num <= '8')
		{
			int inner_inner_num = inner_outer_num + 1;

			while (inner_inner_num <= '9')
			{
				putchar(outer_num);
				putchar(inner_outer_num);
				putchar(inner_inner_num);
				if (outer_num != '7' || inner_outer_num != '8' || inner_inner_num != '9')
				{
					putchar(comma);
					putchar(space);
				}
				inner_inner_num++;
			}
			inner_outer_num++;

		}
		outer_num++;
	}
	putchar(new_line);
	return (0);
}
