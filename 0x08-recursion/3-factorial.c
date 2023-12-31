
/**
 * factorial - return factorial of a number
 * @n: number that it's factorial should be calculated
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
