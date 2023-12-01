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

	va_start(argList, format);

	while (format && format[i])
	{
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
				(str != NULL) ? printf("%s", str) : printf("(nil)");
				break;
			default:
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(argList);
}
