
/**
 * _strncat - joins src to dest string based on n bytes
 * @dest: string to join src string with
 * @src: string to add to dest string
 * @n: the number of bytes to be copied
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int count = 0;

	while (*(dest + len) != 0)
	{
		len++;
	}
	if (n <= 0)
	{
		dest[len] = '\0';
		return (dest);
	}
	while (count < n)
	{
		if (*(src + count) == 0)
		{
			dest[len] = src[count];
			return (dest);
		}
		dest[len] = src[count];
		len++;
		count++;
	}
	return (dest);
}
