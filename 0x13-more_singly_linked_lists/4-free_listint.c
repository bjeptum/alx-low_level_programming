#include "lists.h"
/**
 * free_listint - free linked list
 * @head: pointer to head of list
 * Return: Always 0 if it fails
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
