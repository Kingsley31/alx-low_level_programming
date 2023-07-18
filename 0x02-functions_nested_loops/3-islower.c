

/**
 * _islower - checks if char is lowercase
 *
 * Return: 1 it's lower, 0 it's not lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	return 0;
}
