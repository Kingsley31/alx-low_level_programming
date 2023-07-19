#include <stdio.h>
#include <stdint.h>

/**
 * main - prints first 98 Fabonacci number followed by new line each seperated,
 * each seperated by comma followed by space
 *
 * Return: 0 success
 */
int main(void)
{
	static unsigned long int first = 0, second = 1, sum, i;

	for (i = 1; i <= 98; i++)
	{
		sum = first + second;
		first = second;
		second = sum;

		printf("%lu", sum);

		if (i < range)
			printf(" ,");
	}
	printf("\n");
	return (0)
}
