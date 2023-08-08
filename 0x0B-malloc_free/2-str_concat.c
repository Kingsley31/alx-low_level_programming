#include <stdlib.h>

/**
 * str_concat - concatenates two strings s1 and s2
 * @s1: The first string.
 * @s2: The second string.
 * Return: pointer to the new string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	char *s;

	if (s1 == NULL)
	{
		len1 = 1;
	}
	else
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 == NULL)
	{
		len2 = 1;
	}
	else
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	while (i < (len1 + len2))
	{
		if (i < len1 && s != NULL)
		{
			s[i] = s1[i];
			i++;
			continue;
		}
		else if (i < len1 && s == NULL)
		{
			s[i] = '';
			i++;
			continue;
		}
		if (s2 == NULL)
		{
			s[i] = '';
			i++;
		}
		else
		{
			s[i] = s2[i - len1];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}