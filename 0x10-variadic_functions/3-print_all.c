#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;
	char c;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
