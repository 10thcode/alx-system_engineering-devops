#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - create sorted hash table
 * @size: the size of the hash table
 * Return: the newly created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	shash_node_t **array;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	array = calloc(size, sizeof(shash_node_t *));
	if (array == NULL)
	{
		free(sht);
		return (NULL);
	}

	sht->size = size;
	sht->array = array;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * shash_table_set - insert item to a hash table
 * @ht: the hashtable
 * @key: the key of the new item
 * @value: the value of the new item
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn, *temp;
	unsigned long int index;

	if (ht == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)(key), ht->size);

	if (ht->array[index] != NULL)
	{
		for (temp = ht->array[index]; temp != NULL; temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
		}
	}

	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
		return (0);

	hn->key = strdup(key);
	hn->value = strdup(value);
	hn->next = ht->array[index];
	ht->array[index] = hn;
	add_to_slist(ht, hn);

	return (1);
}

/**
 * add_to_slist - add node to sorted list
 * @ht: a hash table
 * @hn: a hash node
 */
void add_to_slist(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		hn->sprev = NULL;
		hn->snext = NULL;
		ht->shead = hn;
		ht->stail = hn;
	}
	else
	{
		for (temp = ht->shead; temp != NULL; temp = temp->snext)
		{
			if (strcmp(temp->key, hn->key) > 0)
			{
				if (temp->sprev != NULL)
					temp->sprev->snext = hn;
				hn->sprev = temp->sprev;
				temp->sprev = hn;
				hn->snext = temp;
				if (hn->sprev == NULL)
					ht->shead = hn;
				return;
			}
		}

		hn->sprev = ht->stail;
		ht->stail->snext = hn;
		ht->stail = hn;
		hn->snext = NULL;
	}
}

/**
 * shash_table_get - get value of a node form a hash table
 * @ht: the hash table
 * @key: the key of the node
 * Return: the value of node at index @key, otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (key[0] == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)(key), ht->size);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}

	return (NULL);
}

/**
 * shash_table_print - print item in hash table in sorted order
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int print_comma = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (temp = ht->shead; temp != NULL; temp = temp->snext)
	{
		if (print_comma)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_comma = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print item in hash table in
 * sorted but in reverse order
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int print_comma = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (temp = ht->stail; temp != NULL; temp = temp->sprev)
	{
		if (print_comma)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_comma = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a hash table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
		return;

	free_slist(ht->shead);

	free(ht->array);
	free(ht);
}

/**
 * free_slist - free sorted doubly linked list
 * @slist: the head of the doubly linked list
 */
void free_slist(shash_node_t *slist)
{
	if (slist == NULL)
		return;

	free_slist(slist->snext);
	free(slist->key);
	free(slist->value);
	free(slist);
}
