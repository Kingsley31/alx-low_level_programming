#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: arguements array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
