#include <stdio.h>

/**
 * is_prime - checks if a number is a prime number
 * @n: number to check
 * Return: 1 n is prime, 0 n is not a prime number
 */
int is_prime(unsigned long int n)
{
	unsigned long int counter = 2;
	unsigned long int number_is_prime = 1;
	
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (number_is_prime);
	}
	for (counter = 2; counter < n; counter++)
	{
		if (n % counter == 0)
		{
			number_is_prime = 0;
			break;
		}
	}
	return (number_is_prime);
}


/**
 * main - finds and prints the largest prime factor of 612852475143
 * @void: accepts nothing
 * Return: 0 success
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i;
	unsigned long int largest_factor = 0;
	int prime = 0;
	
	for (i = 2; i <= n; i++)
	{
		if (n % i != 0)
			continue;
		prime = is_prime(i);

		if (prime == 1 && i > largest_factor)
			largest_factor = i;
	}
	printf("%lu\n", largest_factor);
	return (0);
}
