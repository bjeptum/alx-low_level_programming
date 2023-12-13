#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: array tobe processed
 * @cmp: pointer to function to be used to compare values
 * Return: index of first element,else-1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
