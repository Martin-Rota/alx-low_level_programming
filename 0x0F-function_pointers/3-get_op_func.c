#include "calc.h"

/**
 * get_op_func - function that select correct operation function
 * @s: operation given.
 * Return: pointer to correct operation function (0-4)
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
	if (*(ops[i].op) == *s && *(s + 1) == '\0')
		return (ops[i].f);
	i++;
	}

	return (NULL);
}
