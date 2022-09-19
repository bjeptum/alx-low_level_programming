#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: first inetger to be inputted
 * @b: second integer to be inputted
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
