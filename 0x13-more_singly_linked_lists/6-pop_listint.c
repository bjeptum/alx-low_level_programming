#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to head of list
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data = 0;

	if (*head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}
