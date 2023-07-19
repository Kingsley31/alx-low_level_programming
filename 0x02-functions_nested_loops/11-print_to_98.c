#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print from n to 98
 *
 * @n: The number to print to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
