#include "lists.h"
/**
 * listint_len - Returns no.of elements in linked list
 * @h: pointer to head of list
 * Return: count of elements,0 on failure
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
