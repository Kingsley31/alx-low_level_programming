
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -15 if s2 > s1, 15 if s1 > s2 and 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)(char)(s1[i]) - (int)(char)(s2[i]));
}
