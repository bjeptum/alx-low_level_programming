#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements in the array
 * @a: array of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) % 1 == 0)
		{
			printf(", ");
		}
	}
}
