#include "3-calc.h"
#include "stdlib.h"
/**
 * get_op_func - pointer to select the function that performs the
 *		operation asked by the user
 *
 * @s: The operator passed as an arguement
 *
 * Return: A pointer to the function corresponding to the operator
 *		given as a parameter
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

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
	}
	return (NULL);
}

