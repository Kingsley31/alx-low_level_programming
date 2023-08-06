#include <stdio.h>
#include <stdlib.h>

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

/**
 * str_is_int - checks if a string is int
 * @s: string to check
 * Return: 0 if s is not int, 1 if s is int
 */
int str_is_int(char *s)
{
	int i = 0;

	if (!_isdigit(s[i]) || s[i] != '-')
	{
		return (0);
	}
	i++;
	while (s[i] != '\0')
	{
		if (!_isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - sums positive numbers supplied as arguements
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0 if successful, 1 if arguements contains a non-integer value
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (str_is_int(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
