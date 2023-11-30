#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of int passed to the function
 *
 * Return: Always 0 on failure
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int val;
	unsigned int i;

	va_start(argList, n);

	for (i = 0; i < n; ++i)
	{
		val = va_arg(argList, unsigned int);
		printf("%d", val);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argList);
}
