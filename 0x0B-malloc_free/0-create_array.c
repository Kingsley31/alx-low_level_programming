#include <stdlib.h>

/**
 * create_array - creates an array with malloc
 * @size: size to be dynamically allocated to the array
 * @c: character to fill the array with
 * Return: array of size size filled with c
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int len = 0;

	if (size <= 0)
		return (NULL);
	arr = (char*) malloc((size + 1) * sizeof(c));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (len < size)
	{
		arr[len] = c;
		len++;
	}
	arr[size] = '\0';
	return arr;
}
