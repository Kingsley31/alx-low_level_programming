
/**
 * _strspn - gets the length of a prefix string
 * @s: string to compare with accept
 * @accept: string to check its byte occurance in s
 * Return: length of accept bytes in s
 */
int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (s[i] == accept[i])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
