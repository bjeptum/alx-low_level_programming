#include "lists.h"

/**
* _strlen - gets length of the string
* @s: string
* Return: length of the string
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
* *add_node - pointer to function add node
* @head: start of list_t
* @str: str
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	int i;
	int len;

	if (str == NULL || head == NULL)
		return (NULL);

	len = _strlen(str);
	new_node = *head;
	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		new_str[i] = str[i];
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
