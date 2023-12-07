#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table we want to add or update the key/value to
 * @key: the key, not empty string
 * @value: value associate with key. must be duplicated. can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	item = malloc(sizeof(hash_table_t));
	if (item == NULL)
		return (0);

	/*Allocate memory and dyplicate key and value*/
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (0);
	}

	/*find index where node should be inserted*/
	index = key_index((const unsigned char *)key, ht->size);

	/*item point to current head of linked list at calculated index*/
	item->next = ht->array[index];
	/*head of linked list point to item, item is new first element*/
	ht->array[index] = item;

	return (1);
}
