#include <stdio.h>

/**
 * main - computes and print the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0 success
 */
int main(void)
{
	int sum = 0;
	int counter = 1;

	while (counter <= 1024)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
		{
			sum += counter;
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
