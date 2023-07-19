#include "main.h"
#include <stdio.h>


/**
 * print_whole_num - prints a whole number
 *
 * @num: the whole number to print
 *
 * Return: void
 */
void print_whole_num(int num)
{
	if (num > 9)
	{
		printf("%d", num);
	}
	else if (num < 10)
	{
		_putchar(num + '0');
	}
}


/**
 * print_to_98 - print from n to 98
 *
 * @n: The number to print to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		if (i < 0)
		{
			int abs_i = i * -1;

			_putchar('-');
			print_whole_num(abs_i);
		}
		else if (i >= 0)
			print_whole_num(i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		i+=1;
	}
	_putchar('\n');
}
