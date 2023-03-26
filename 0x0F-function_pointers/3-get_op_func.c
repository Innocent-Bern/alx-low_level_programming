#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_op_func - function that adds int a and b
* @s: input string
* @int: integer input parameter
* Return: int 
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
		if (*(ops[i].op) == *s)
		{
			return(ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(100);
	return(0);
}
