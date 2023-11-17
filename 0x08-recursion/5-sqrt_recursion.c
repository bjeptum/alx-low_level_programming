#include "main.h"
/**
 * _sqrt_recursion - returns naturalsquare root
 * @n: number to find naturalsquare root
 * Return: Always 1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

/**
 * find_sqrt - helper function to find the square root recursively
 * @n: number to find natural square root
 * @sqrt: current guess for the square root
 * Return: Always  -1 if no natural square root for n
 */
int find_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt * sqrt > n)
	{
		return (-1);
	}
	/* Recursive case: increment sqrt and continue the search */
	else
	{
		return (find_sqrt(n, sqrt + 1));
	}
}
