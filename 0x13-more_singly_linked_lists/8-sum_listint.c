#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t linked list.
 * @head: the head of the list.
 * Return: sum of all data in the list.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
