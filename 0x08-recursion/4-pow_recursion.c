#include "main.h"
/**
 * _pow_recursion - find the power of a digit
 * @x: base integer to find the power
 * @y: exponent integer
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		result = (x * _pow_recursion(x, y - 1));
		return (result);
	}
	else
	{
	return (1);
	}
}
