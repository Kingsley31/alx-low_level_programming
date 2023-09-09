#include <stdio.h>

/**
 * set_bit - sets a bit a particular position
 * @n: pointer to the number to set the bit
 * @index: position of the bit to set
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int status = -1;

	if (index > 64)
	{
		return (status);
	}

	*n = *n | (1 << index);
	status = 1;
	return (status);
}
