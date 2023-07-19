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
	uintmax_t prev1 = 1;
	uintmax_t prev2 = 2;
	int i;

	printf("%ju, %ju", prev1, prev2);
	for (i = 3; i <= 98; i++)
	{
		uintmax_t next = prev1 + prev2;

		printf(", %ju", next);
		prev1 = prev2;
		prev2 = next;
	}
	printf("\n");
	return (0);
}
