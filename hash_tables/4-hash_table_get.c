#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return: value associated with the element, NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_value = 0;
	int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (NULL);

	hash_value = hash_djb2((unsigned char *)key);
	index = hash_value % ht->size;
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
