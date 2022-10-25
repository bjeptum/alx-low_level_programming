#include "lists.h"
 
/*
 * print_list - prints all the elements of a list
 * @list_t: sruct of type constant
 * @h: pointer to variable elements of t
 */
size_t print_list(const list_t *h)
{
	size_t len;
	const list_t *temp = h;

	len = 0;
	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%u] %s\n", temp->len, temp->str);
		else
			printf("0] (nil)\n");
		len++;
		temp = temp->next;
	}
	return (len);
}
