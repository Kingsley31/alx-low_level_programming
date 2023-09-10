#include <stdio.h>

/**
 * bit_is_set - check if bit at a particular position is set
 * @n: the number to check it's bit
 * @index: the position of the bit
 * Return: 1 if bit is set and 0 if not
 */
int bit_is_set(unsigned long int n, unsigned int index)
{
	int value = -1;

	if (index > 64)
		return (value);
	value = (n >> index) & 1;
	return (value);
}

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
	if (!bit_is_set(*n, index) == 1)
		return (status);
	*n = *n ^ (1 << index);
	status = 1;
	return (status);
}
