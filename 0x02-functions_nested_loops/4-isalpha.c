
/**
 * _isalpha - checks if a characeter is an alphabet
 *
 * @c: the character to check
 * Return: 1 if char is alphabet, 0 char is not alphabet
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);	
}
