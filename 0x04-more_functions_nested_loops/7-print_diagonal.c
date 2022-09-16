#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 *
 */
void print_diagonal(int n)
{
	int c = 0;
	int i = 0;

	if (n > 0)
	{
		while (c < n)
		{
			while (i < c)
			{
				_putchar(' ');
				i++;
			}
			c++;
			i = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

