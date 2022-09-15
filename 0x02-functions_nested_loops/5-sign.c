#include "main.h"
/**
 * print_sign - prints sign of a number
 *  @n: number to be inputted
 *
 * Return: 0 exit)
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar ('+');
	else if (n == 0)
		_putchar('0');
	else
		_putchar('-');
	return (0);
}
