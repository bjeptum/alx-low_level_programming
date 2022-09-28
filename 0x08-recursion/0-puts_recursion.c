#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to be inputted
 *
 * Return: Always 0 exit
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
