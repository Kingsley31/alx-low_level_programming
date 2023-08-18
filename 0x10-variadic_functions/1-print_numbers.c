#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by new line.
 * @separator: character for separating the numbers
 * @n: number of arguements passed
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *sep = separator;
	va_list ap;

	if (n <= 0)
		return;
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if ((i + 1) != n && sep != NULL)
			printf("%s", sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
