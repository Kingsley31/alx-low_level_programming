
/**
 * _strcat - concatenates two strings
 * @dest: thr first string that the second string should be joined
 * together with
 *
 * @src: the second string to be added to the dest string
 *
 * Return: char* pointer
 */
char *_strcat(char *dest,char *src)
{
	int len = 0;
	int count = 0;

	while (*(dest + len) != 0)
	{
		len++;
	}
	len += 1;
	while (*(src + count) != 0)
	{
		dest[len] = src[count];
		count++;
		len++;
	}
	dest[len] = '\0';
	return (dest);

}
