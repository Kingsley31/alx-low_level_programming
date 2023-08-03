

/**
 * is_palindrome - checks if a string is palidrome
 * @s: string to check
 * Return: 1 if s is palindrome and 0 if s is not
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;
	int max = 0;
	int is_pal = 1;

	while (s[len] != '\0')
	{
		len++;
	}
	len -= 1;
	max = len / 2;
	if (len % 2 == 0)
	{
		max = (len / 2) - 1;
	}
	while (i <= max)
	{
		if (s[i] != s[len - i])
		{
			return (0);
		}
		i++;
	}
	return (is_pal);
}
