#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be inputted
 *
 * Return: a string and a new line
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
