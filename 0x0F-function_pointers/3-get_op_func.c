#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - a pointer to a function that performs operation on 2 integers
 * @s: a pointer to the string this function would receive
 * Description: this function is a function pointer
 * or pointer to a function which would receive a string as argument
 * after which this function would "RETURN A FUNCTION" that receives
 * two integers as arguments and then finally return an integer
 *
 * Return: returns an integer
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

	/*traverse through the array struct using a while LOOP*/
	while (ops[i].op != NULL)
	{
		/* compare and search for mactching operator */
		if (s != NULL && strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
