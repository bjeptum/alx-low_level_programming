#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * @size: size of array
 * @action: pointer to function to be used on each element
 * @array: array to be used
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
