#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches fo a value in array
 * @array: pointer to first element of the array
 * to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Value and its indes else -1
 */
int linear_search(int *array, size_t size, int value)
{
   unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u]: [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
