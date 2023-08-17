#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter on each element
 * of an array.
 * @array: array to execute action on its elements.
 * @size: size of the array in bytes
 * @action: pointer to the function passed in.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len = size;
	size_t n = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	while (n < len)
	{
		action(array[n]);
		n++;
	}
}
