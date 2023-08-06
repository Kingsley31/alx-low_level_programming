#include <stdio.h>
#include <stdlib.h>

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
		if (atoi(argv[i]) == 0)
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
