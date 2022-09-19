#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be inputted
 *
 * Return: string characters
 */
void puts2(char *str)
{
	int i;

	for (int i = 0; i < _strlen(str); i += 2)
	{
		putchar(str[i]);
	}
	return (0);
}
