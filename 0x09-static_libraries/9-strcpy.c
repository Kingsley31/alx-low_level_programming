
/**
 * _strcpy - copy the string in the source to destination and
 * return destination
 *
 * @dest: the destination to copy string to
 * @src: the source of the string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != 0)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
