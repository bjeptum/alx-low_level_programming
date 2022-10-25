#include "lists.h"
 
/*
 * print_list - prints all the elements of a list
 * @list_t: sruct of type constant
 * @h: pointer to variable elements of t
 */
size_t print_list(const list_t *h)
{
	size_t len;
	const list_t *ptr = h;

	len = 0;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		len++;
		ptr = ptr->next;
	}
	return (len);
}
