#include"main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in array
 * @size: byte size of eachelement
 * Return: Always NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	unsigned int i;
	void *ptr;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / size != nmemb)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		for (i = 0; i < total_size; i++)
		{
			*((char *)ptr + i) = 0;
		}
	}
	return (ptr);
}
