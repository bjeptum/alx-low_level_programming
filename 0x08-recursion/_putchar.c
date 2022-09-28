#include "main.h"

/**
 *  * main -Entry point
 *   * Description - prints _putchar and a new line
 *    *
 *    * Return: Always 0 Success)putchar
 *    */
int main(void)
{
	char *ch = "_putchar";
	
	while (*ch != '\0')
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
