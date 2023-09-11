
/**
 * get_first_bit - gets the first bit of a number
 * @n: the number to get it's first bit
 * Returns: the first bit of n
 */
unsigned int get_first_bit(unsigned long int n)
{
	return (n & 1);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: first number
 * @m: second number number
 * Return: number of bits to be flipped to go from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if (get_first_bit(n) != get_first_bit(m))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
