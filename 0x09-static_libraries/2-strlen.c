
/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string address
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int counter = 1;

	if (*s == 0)
		return (0);
	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}
