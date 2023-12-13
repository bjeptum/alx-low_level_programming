#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: Pointer to allocated memory or Status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
