#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: head of list
* Return: Nodes data n
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;
	int count = 0;

	if (*head == NULL || head == NULL)
		return (0);

	tmp = current = *head;
	if(*head)
	{
		count = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		count = 0;
	return (count);
}
