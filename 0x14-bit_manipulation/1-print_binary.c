#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		printf("%ld", n);
		return;
	}
	print_binary(n >> 1);
	printf("%ld", (n & 1));
}
