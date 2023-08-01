#include <stddef.h>

/**
 * _strchr - returns pointer to the first occurance of a character in a string
 * @s: string to check
 * @c: character to check
 * Return: pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (*(s + i) != 0)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (p);
}
