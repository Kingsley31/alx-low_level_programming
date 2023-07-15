#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int s_digit = '0';
	int comma = ',';
	int space = ' ';

	while (s_digit <= '9')
	{
		putchar(s_digit);
		if (s_digit != '9')
		{
			putchar(comma);
			putchar(space);
		}
		s_digit++;
	}
	return (0);
}
