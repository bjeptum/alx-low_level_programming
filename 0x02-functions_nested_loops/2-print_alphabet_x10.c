#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: X10 a-z
 */
void print_alphabet_x10(void)
{
	int n, sh;

	sh = 0;
	while (sh <= 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
	}
	sh++;
	_putchar('\n');
}
