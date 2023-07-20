
/**
 * _isdigit - Checks if a character is between 0 and 9
 * @c: The character to check
 * Return: 1 if c is betwen 0 and 9 and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
