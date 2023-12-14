#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int i;
	int size;
	int flag = 0;

	size = sizeof(unsigned long int) * 8;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
