#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: a pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	free_listint(temp);
	*head = NULL;
}

/**
 * free_listint - frees a simple listint_t list.
 * @head: the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	free_listint(head->next);
	free(head);
}
