#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operation on two numbers
 * @argc: number of arguements passed
 * @argv: two dimentional array of arguements passed
 * Return: 0 when succeded
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;
	int (*opfunc)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	opfunc = get_op_func(argv[2]);
	if (opfunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = opfunc(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
