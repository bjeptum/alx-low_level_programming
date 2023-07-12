#include "search_algos.h"
/**
 * binary_search - searches fo a value in array
 * @array: pointer to first element of the array
 * to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Value and its index else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		/* Check if value is present at mid */
		if (array[mid] == value)
			return (mid);
		/* if value is greater, ignore left half */
		else if (array[mid] < value)
			left = mid + 1;
		/*if value is smaller, ignore right half */
		else
			right = mid - 1;
	}
	return (-1);
}
