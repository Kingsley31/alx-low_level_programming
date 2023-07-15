#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int first = '0', comma = ',', space = ' ', new_line = '\n';

	while (first <= '9')
	{
		int second = '0';

		while (second <= '8')
		{
			int third = '0';

			if (first > '0')
				third = first;
			if (second > '0' && first < '0')
				third = '0';
			while (third <= '9')
			{
				int fourth = '1';

				if (second > '0')
					fourth = second + 1;
				if (third > '0' && second < '1')
					fourth = '0';
				while (fourth <= '9')
				{
					putchar(first);
					putchar(second);
					putchar(space);
					putchar(third);
					putchar(fourth);
					if (first != '9' || second != '8' || third != '9' || fourth != '9')
					{
						putchar(comma);
						putchar(space);
					}
					fourth++;
				}
				third++;
			}
			second++;
		}
		first++;
	}
	putchar(new_line);
	return (0);
}
