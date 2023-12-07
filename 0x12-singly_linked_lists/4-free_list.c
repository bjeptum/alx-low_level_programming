#include"lists.h"
/**
 * free_list - frees a list
 * @head: start node of list
 *
 * Return: Always NULL if it fails
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
