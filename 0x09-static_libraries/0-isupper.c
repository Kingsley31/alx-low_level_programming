
/**
 * _isupper - Checks if a character is uppercase
 * @c: the character to check
 * Return: 1 if c is upper 0 if c is not upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
