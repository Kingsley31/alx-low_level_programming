#include <stdio.h>

/**
 * main - prints number of arguements passed to it
 * @argc: number of arguements passed to main
 * @argv: array of arguements passed to main
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
