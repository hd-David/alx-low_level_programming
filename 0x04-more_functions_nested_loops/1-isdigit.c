#include "main.h"

/**
 * Checks the character is a digit or not
 * @c: Input number as an integer
 *
 * Return: Value of 1 or 0
 */

int _isdigit(int c)

{
if(c>= '0' && c<= '9')
{
return (1);
}
else
{
return (0);
} 
}
