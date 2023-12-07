#include "lists.h"
/**
 * add_node - adds a new mode at the beginning of alist
 * @head: pointer to start of node
 * @str: malloc'ed string
 *
 * Return: Always NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = (*head);
	(*head) = new;

	return (new);
}
