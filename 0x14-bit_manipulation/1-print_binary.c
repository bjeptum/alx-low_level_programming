#include "main.h"
/**
* print_binary - prints binary represenattion of a number
* @n: number to be converted
* Return: Binary value
*/
void print_binary(unsigned long int n)
{
	unsigned long int j;
	int i;

	for (i = 31; i >= 0; i--)
	{
		j = n >> i;
		if (j & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
