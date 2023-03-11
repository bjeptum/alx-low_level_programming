#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: fixed parameter
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int x;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(pa, int);

		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(pa);
}
