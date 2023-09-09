
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to return the value of it's bit index
 * @index: the position of bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value = -1;

	if (index < 0)
		return (value);
	value = (n >> index) & 1;
	return (value);
}
