#include "lists.h"
/**
 * sum_listint - sum of all data of linked list
 * @head: pointer to head node
 * Return: Always 0 on failure
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)

	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
