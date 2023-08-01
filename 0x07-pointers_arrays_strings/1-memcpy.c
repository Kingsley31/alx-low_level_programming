
/**
 * _memcpy - copies memory area of src to dest
 * @dest: area to be copied into
 * @src: area to be copied from
 * @n: number of src memory space to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
