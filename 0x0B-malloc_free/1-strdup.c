#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * the string str.
 * @str: string to return it's duplicate
 * Retrun: duplicate of str or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(str));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
