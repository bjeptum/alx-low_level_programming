#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of list
 * @head: pointer to head node
 * @index: index of node to return
 * Return: Always 0 on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
