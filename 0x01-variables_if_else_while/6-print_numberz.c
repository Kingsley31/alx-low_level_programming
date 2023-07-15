#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int s_digit = '0';

	while (s_digit <= '9')
	{
		putchar(s_digit);
		s_digit++;
	}
	s_digit = '\n';
	putchar(s_digit);
	return (0);
}
