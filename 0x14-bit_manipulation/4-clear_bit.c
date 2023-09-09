#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to set the bit
 * @index: position of the bit to set to 0
 * Return: 1 if success -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int status = -1;

	if (index > 64)
		return (status);
	if (*n == 0 && index != 0)
		return (0);
	if (*n == 0 && index == 0)
		return (1);
	*n = *n ^ (1 << index);
	status = 1;
	return (status);
}
