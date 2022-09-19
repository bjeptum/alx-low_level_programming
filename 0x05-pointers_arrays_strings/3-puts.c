#include "main.h"
/**
 * _puts - prints a string
 * @str: stirng to be inputted
 *
 * Return: always 0
 */
void _puts(char *str)
{
	char *t = *str

	while (*t != '\0')
	{
		_putchar(*t);
		t++;
	}
	_putchar('\n');
	return (0);
