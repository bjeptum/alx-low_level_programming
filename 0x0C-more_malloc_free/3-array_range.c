#include"main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum valued element
 * @max: maximum valued element
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int size;
	int *result;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	result = (int *)malloc(size * sizeof(int));

	if (result == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; ++i)
	{
		result[i] = min + i;
	}
	return (result);
}
