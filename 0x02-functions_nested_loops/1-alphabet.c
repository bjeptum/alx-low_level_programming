#include "main.h"
/**
* print_alphabet- prints the alphabet in lowercase
* ch: the character to input
*
* Return: 0 (Sucess)
*/
int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
