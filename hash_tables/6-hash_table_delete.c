#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *item, *temp;

	if (ht == NULL)
		return;

	for (; index < ht->size; index++)
	{
		item = ht->array[index];

		while (item != NULL)
		{
			temp = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = temp;
		}
	}
	free(ht->array);
	free(ht);
}
