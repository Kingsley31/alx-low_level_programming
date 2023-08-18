#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by new line.
 * @separator: character for separating the numbers
 * @n: number of arguements passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *sep = separator;
	int num;

	va_list list;

	va_start(list, n);

	for ( ; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (sep != NULL && i < n - 1)
			printf("%s", sep);
	}
	printf("\n");
	va_end(list);
}
