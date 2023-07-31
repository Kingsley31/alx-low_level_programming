
/**
 * _memset - fills memory with constant n bytes
 * @s: pointer to memory
 * @b: the constant byte to fill the memory with
 * @n: number of s memory areas to fill
 *
 * Return: returns pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, max = n;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
