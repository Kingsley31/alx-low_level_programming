#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int hex_digit = '0';

	while (hex_digit <= '9')
	{
		putchar(hex_digit);
		hex_digit++;
	}
	hex_digit = 'a';
	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;
	}
	hex_digit = '\n';
	putchar(hex_digit);
	return (0);
}
