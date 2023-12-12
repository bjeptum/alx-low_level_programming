#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at a givenposition
 * @head: pointer to head of node
 * @idx: index of node to add new node
 * @n: data
 * Return: address of new,otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	current = *head;
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
