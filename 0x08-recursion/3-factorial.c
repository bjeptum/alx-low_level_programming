#include "main.h"
/**
 * factorial - calculates teh factorial of ann integer
 * @n: integer to be inputted
 *
 * Return: the factorial of an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
