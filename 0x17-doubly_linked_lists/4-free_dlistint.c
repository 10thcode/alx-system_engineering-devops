#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	free_dlistint(head->next);
	free(head);
}
