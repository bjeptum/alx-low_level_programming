#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to head of list
 * Return: ALways 0 on failure
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
