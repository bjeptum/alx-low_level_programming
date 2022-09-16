#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: Numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		if (n != 2 || n != 4)
		{
			_putchar(n + '0');
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
