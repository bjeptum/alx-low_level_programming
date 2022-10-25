#include "lists.h"
/**
* list_len - Returns the number of elements in the  linked list list_t
* @h: pointer to variable elements of the list
* Return: Count  of elements
*/
size_t list_len(const list_t *h)
{
	size_t len;
	const list_t *ptr = h;

	len = 0;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("%d\n", ptr->len);
		else
			printf("Error\n");
		ptr = ptr->next;
		len++;
	}
	return (len);
}


