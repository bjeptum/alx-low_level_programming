#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: fixed parameter
 * @...: variable parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);


	va_start(pa, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(pa, int);
	}

	va_end(pa);

	return (sum);
}
