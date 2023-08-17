#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array containing the integer to be search for
 * @size: number of elements in the array
 * @cmp: the pointer to the comparator function
 * Return: the index of the first element of which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int len = size;
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	       return (-1);
	while (i < len)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
