#include "main.h"
/**
 * factorial - finds the factorial of a digit
 * @n: digit to find the factorial
 * Return: Always o and -1 if an error
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
	else
	{
		return (n * factorial(n - 1));
	}
}
