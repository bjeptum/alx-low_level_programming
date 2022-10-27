#include "lists.h"
/**
* print_listint - prints all elements of a list
* @h: head of the list
* Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		if (h == NULL)
		{
			printf("Error\n");
		}
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
