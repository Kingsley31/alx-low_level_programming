#include <stdio.h>

/**
 * main - prints all arguements supplied to it
 * @argc: number of arguements passed
 * @argv: array of passed arguements
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= (argc - 1))
	{
		printf("%s", argv[i]);
		i++;
	}
	return (0);
}
