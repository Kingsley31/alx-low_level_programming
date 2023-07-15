#include <stdio.h>

/**
 * print_nums - Print numbers
 *
 * @first: first number
 * @second: second number
 * @third: third number
 * @fourth: fourth number
 * @comma: comma character
 * @space: space character
 * Return: void
 */
void print_nums(int first, int second, int third, int fourth,
		int comma, int space)
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
}

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
				if (second > '0' && third > '0')
					fourth = '0';
				while (fourth <= '9')
				{
					print_nums(first, second, third, fourth, comma, space);
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
