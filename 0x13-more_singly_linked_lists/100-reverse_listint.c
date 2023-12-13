#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next = NULL;

	prev = NULL;

	while (head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
