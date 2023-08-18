#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: character for seperating the strings
 * @n: number of arguements passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, n);
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
