#include <stdio.h>

/**
 * print_array - print the specified number of elements in an array
 * @a: the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		if (count != n - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
