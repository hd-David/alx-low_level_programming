#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation asked
 * by the user
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the corresponding function if s matches one of the
 * expected operators, NULL otherwise
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

while (ops[i].op != NULL)
{
if (s[0] == ops[i].op[0])
break;
i++;
}

return (ops[i].f);
}
