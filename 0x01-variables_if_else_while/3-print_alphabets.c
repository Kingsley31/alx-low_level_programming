#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
	}
	c = '\n';
	putchar(c);
	return (0);
}
