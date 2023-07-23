#include <stdio.h>

/**
 * is_prime - checks if a number is a prime number
 * @n: number to check
 * Return: 1 n is prime, 0 n is not a prime number
 */
int is_prime(unsigned long int n)
{
	unsigned long int counter = 5;
	unsigned long int number_is_prime = 1;
	
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (number_is_prime);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (counter = 5; counter * counter < n; counter += 6)
	{
		if (n % counter == 0)
		{
			return (0);
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
	unsigned long int asummed_factor = 2;
	unsigned long int dividend = n;
	unsigned long int largest_factor = 0;
	int assumed_factor_is_prime = 0;
	unsigned long int prime_factors_sum = 1;
	
	while (prime_factors_sum < n)
	{
		if (dividend % asummed_factor != 0)
		{
			asummed_factor++;
			continue;
		}
		assumed_factor_is_prime = is_prime(asummed_factor);
		if (assumed_factor_is_prime == 1 && asummed_factor > largest_factor)
			largest_factor = asummed_factor;
		if (assumed_factor_is_prime == 1)
		{
			prime_factors_sum *= asummed_factor;
			dividend /= asummed_factor;
		}
	}
	printf("%lu\n", largest_factor);
	return (0);
}
