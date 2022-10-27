#include "lists.h"
/**
* free_listint2 - frees the list listint_t
* @head: head of list
* Return: summary of freed memory
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *next;

	while (head != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
