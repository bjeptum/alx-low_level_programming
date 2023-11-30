#include "variadic_functions.h"
/**
 * print_strings - prints strings)
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 *
 * Return: Always 0 on failure
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	char *val;
	unsigned int i;

	va_start(argList, n);

	for (i = 0; i < n; ++i)
	{
		val = va_arg(argList, char*);
		if (val == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", val);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argList);
}
