
/**
 * _pow_recursion - calculates x to the power of y recursively
 * @x: number to calculates its power
 * @y: power of x
 * Return: sum of x raised to the power  y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return 1;
	if (y < 0)
		return -1;
	return (x * _pow_recursion(x,y-1));
}
