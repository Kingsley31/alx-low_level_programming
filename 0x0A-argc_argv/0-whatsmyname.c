#include <stdio.h>

/**
 * main - prints the program name
 * @argc: arguement count
 * @argv: arguement ventor, contains array of arguements passed to the
 * program.
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
