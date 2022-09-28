#include "main.h"
/**
 * _pow_recursion - calculates the power value of integer
 * @x: integer to be inputted
 * @y: the power factor
 *
 * Return: Always 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
