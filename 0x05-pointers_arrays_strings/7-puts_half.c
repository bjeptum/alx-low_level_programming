#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: string to be inputted
 */
void puts_half(char *str)
{
	int y;
	int v;

	y = 0;

	for (v = 0; str[v] != 0; v++)
	{
		y++;
	}
	if (y % 2 == 0)
	{
		for (v = y / 2; v < y; v++)
		{
			_putchar(str[v]);
		}
	}
	else
	{
		for (v = (y / 2) + 1; v < y; v++)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}
