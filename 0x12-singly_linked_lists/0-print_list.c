#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head node of the list
 * Return: the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
	return (print_list(h->next) + 1);
}
