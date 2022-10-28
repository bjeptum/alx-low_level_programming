#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: head of list
* Return: Nodes data n
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int count = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (count);
}


