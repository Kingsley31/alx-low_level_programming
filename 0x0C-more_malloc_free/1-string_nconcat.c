#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 characters to copy
 * Return: pointer to new copy of s1 and n copies of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, totallen = 0, c1 = 0, c2 = 0, max = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	totallen = (len1 > 0 ? len1 - 1 : len1) + (n >= len2 ? len2 : n);
	p = malloc(totallen * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1[c1] != '\0')
	{
		p[c1] = s1[c1];
		c1++;
	}
	max = (n >= len2 ? len2 : n);
	while (c2 < max)
	{
		p[c2] = s2[c2];
		c2++;
	}
	p[max] = '\0';
	return (p);
}
