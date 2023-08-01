
/**
 * _memcpy - copies memory area of src to dest
 * @dest - area to be copied into
 * @src - area to be copied from
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
