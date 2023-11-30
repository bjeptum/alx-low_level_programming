#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: fixed initial argument
 *
 * Return: Always 0 on failure
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_them_all = 0;
	unsigned int i;
	unsigned int val;

	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			val = va_arg(args, unsigned int);
			sum_them_all += val;
		}
	}
	va_end(args);
	return (sum_them_all);
}
