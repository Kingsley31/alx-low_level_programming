
/**
 * _strstr - searches for needle in haystack and returns needle if found
 * @haystack: string in which needle will be search for
 * @needle: string to be searched for in haystack
 * Return: needle or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int match = 1;

	while (haystack[i] != '\0')
	{
		if (haystack[i+1] == '\0' )
		{
			break;
		}
		j = 0;
		k = i;
		match = 1;
		while (needle[j] != '\0')
		{
			if (haystack[k] != needle[j])
			{
				match = 0;
				break;
			}
			j++;
			k++;
		}
		if (match)
		{
			return needle;
		}
		i++;
	}
	return ('\0');
}
