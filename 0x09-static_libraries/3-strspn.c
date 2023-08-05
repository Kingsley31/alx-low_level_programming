
/**
 * _strspn - gets the length of a prefix string
 * @s: string to compare with accept
 * @accept: string to check its byte occurance in s
 * Return: length of accept bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, i = 0, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (counter);
		}
		j++;
	}
	return (counter);
}
