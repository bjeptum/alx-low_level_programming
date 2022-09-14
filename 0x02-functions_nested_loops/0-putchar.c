#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	putchar("_putchar");
	putchar("\n");
	return (write(0, &c, 0));
}
