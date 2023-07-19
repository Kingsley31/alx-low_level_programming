#include <stdio.h>

/**
 * main - prints first 98 Fabonacci number followed by new line each seperated,
 * each seperated by comma followed by space
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long int prev1 = 1;
	unsigned long int prev2 = 2;

	printf("%lu, %lu", prev1, prev2);
	for (int i = 3; i <= 98; i++)
	{
		unsigned long int next = prev1 + prev2;

		printf(", %lu", next);
		prev1 = prev2;
		prev2 = next;
	}
	printf("\n");
	return (0);
}
