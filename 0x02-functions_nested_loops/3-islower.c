

/**
 * _islower - checks if char is lowercase
 *
 * @c: character to be checked
 * Return: 1 it's lower, 0 it's not lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
