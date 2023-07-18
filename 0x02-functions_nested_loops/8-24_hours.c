#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int outer = 0;

	while (outer <= 25)
	{
		int inner = 0;

		while (inner <= 59)
		{
			if (outer < 10)
			{
				_putchar('0');
				_putchar(outer + '0');
				_putchar(':');
			}
			else if (outer > 9)
			{
				int fdigit = outer / 10;
				int sdigit = outer % 10;

				_putchar(fdigit + '0');
				_putchar(sdigit + '0');
			}

			if (inner < 10)
			{
				_putchar('0');
				_putchar(inner + '0');
			}
			else if (inner > 9)
			{
				int fdigit = inner / 10;
				int sdigit = inner % 10;

				_putchar(fdigit + '0');
				_putchar(sdigit + '0');
			}
			_putchar('\n');
			inner++;
		}
		outer++;
	}
}
