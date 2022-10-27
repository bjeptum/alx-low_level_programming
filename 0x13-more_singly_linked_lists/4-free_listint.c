#include "lists.h"
/**
* free_listint - frees the list listint_t
* @head: head of list
* Return: node
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
