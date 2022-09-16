#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: integer to be inputted
 *
 * Return: 0 (exit)
 */
int print_last_digit(int a)
{
	int c;

	if (a < 10)
	{
		c = ((10 - (a % 10));
		_putchar(c);
	}
	else
	{
	c = (a % 10);
	_putchar(c);
	}
	return (0);
}
