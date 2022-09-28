#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: integer to be inputted
 *
 * Return: Always 1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n != 0)
	{
		return (n * _sqrt_recursion(n, 0.5 + 1));
	}
	return (1);
}
