#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be inputted
 *
 */
void puts2(char *str)
{
	int i;
	int y = 0;

	while (*str != '\0')
	{
		y++;
	}
	for (i = 0; i < y; i += 2)
	{
		_putchar(str[i]);
	}
}
