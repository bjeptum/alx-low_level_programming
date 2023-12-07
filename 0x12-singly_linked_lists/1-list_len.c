#include "lists.h"
/**
 * list_len - Returns the number of elements in a list
 * @h: pointer to elements of list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (0);
		len++;
		h = h->next;
	}
	return (len);
}
