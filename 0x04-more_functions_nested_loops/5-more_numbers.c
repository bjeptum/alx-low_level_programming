#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: 10 times of the numbers from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int b = 1;

	while (b <= 10)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a);
		}

		_putchar('\n');

		b++;
	}
}
