#include "main.h"
/**
 * print_line -prints a line
 * @n: parameters for a function
 * Return: 0
 */
void print_line(int n);
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
	_putchar('\n');
}
