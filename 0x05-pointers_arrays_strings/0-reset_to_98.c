#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter and updates its value
 * @n: the parameter to be inputted
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *ptr_int;

	ptr_int = &n;
	*ptr_int = 98;
	return (0);
}
