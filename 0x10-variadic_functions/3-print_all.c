#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0 on failure
 */
void print_all(const char * const format, ...)
{
	va_list argList;
	int val;
	char *str;
	unsigned int i = 0;
	int separator = 0;

	va_start(argList, format);

	while (format && format[i])
	{
		if (separator)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				val = va_arg(argList, int);
				printf("%c", (char)val);
				break;
			case 'i':
				val = va_arg(argList, int);
				printf("%d", val);
				break;
			case 'f':
				printf("%f", va_arg(argList, double));
				break;
			case 's':
				str = va_arg(argList, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		separator = 1;
		i++;
	}
	printf("\n");
	va_end(argList);
}
