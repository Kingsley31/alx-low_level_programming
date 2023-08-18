#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all integers passed to it
 * @n: number of integers passed in
 * Return: sum of all the integer passed in
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
