
/**
 * swap_int - swaps the value of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
