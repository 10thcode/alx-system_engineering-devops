#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - calculates the number of elements in a linked listint_t list.
 * @head: a pointer to the beginning of the list.
 * @n: the number to be added to the list.
 * Return: the number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
