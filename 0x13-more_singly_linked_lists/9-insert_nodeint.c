#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to the head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: the data to be added to the list
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	return (insert(*head, idx, n));
}

/**
 * insert - insert a node at a given position
 * @head: the head of the node
 * @index: the position
 * @n: the data to be inserted
 * Return: the address of the new node
 */
listint_t *insert(listint_t *head, unsigned int index, int n)
{
	static unsigned int i = ZERO;
	listint_t *new;

	if (head == NULL || head->next == NULL)
		return (NULL);

	if (i == index - 1)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			i = ZERO;
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = head->next;
		head->next = new;
		return (new);
	}

	i++;

	return (insert(head->next, index, n));
}
