#include "main.h"
/**
 * _sqrt_recursion - returns naturalsquare root
 * @n: number to find naturalsquare root
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
		return (_sqrt_recursion(n));
	}
	else
	{
		return (-1);
	}
}
