#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int max_lcc = 'z';

	while (max_lcc >= 'a')
	{
		putchar(max_lcc);
		max_lcc--;
	}
	max_lcc = '\n';
	putchar(max_lcc);
	return (0);
}
