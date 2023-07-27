
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -15 if s2 > s1, 15 if s1 > s2 and 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	while (*(s1 + len1) != 0)
	{
		len1++;
	}
	while (*(s2 + len2) != 0)
	{
		len2++;
	}
	if (len2 > len1)
		return (-15);
	if (len1 > len2)
		return (15);
	if (len1 == len2)
		return (0);
}
