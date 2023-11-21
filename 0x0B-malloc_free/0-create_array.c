#include"main.h"
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the element in the array
 * Return: pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = (char *)malloc(size * sizeof(char));

	if (ar  == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

