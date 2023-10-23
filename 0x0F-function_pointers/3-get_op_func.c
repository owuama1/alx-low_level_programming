#include "3-calc.h"

/**
 * get_op_func - Returns a pointer to the corresponding function.
 * @s: The operator passed as an argument
 * Return: A pointer to the corresponding operation function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
