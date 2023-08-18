#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets the correct operator function for s
 * @s: operator character
 * Return: pointer to operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < (sizeof(ops) / sizeof(op_t)))
	{
		if (ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

