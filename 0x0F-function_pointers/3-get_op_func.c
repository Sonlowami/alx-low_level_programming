#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - choose the operation to perform
 * @s: the operator to use
 *
 * Return: pointer to the function that does the job
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (s)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
