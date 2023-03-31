#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: the head node of the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}
