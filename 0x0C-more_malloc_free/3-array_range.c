#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: pointer to the array created
 */
int *array_range(int min, int max)
{
	int *p;
	int numblocks = 0;
	int tempmin = min;
	int i = 0;

	if (min > max)
		return (NULL);
	while (tempmin <= max)
	{
		numblocks++;
		tempmin++;
	}
	p = malloc(numblocks * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < numblocks)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
