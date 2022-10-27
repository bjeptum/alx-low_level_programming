#include "lists.h"
/**
* add_nodeint - add a new node at the beginning of list
* @head: head of the list
* @n: new data of integer type
* Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	new->n = n;

	new->next = (*head);
	(*head) = new;
	return (new);
}

