#include "hash_tables.h"

/**
 * hash_table_print
 * @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *item;
	int first = 1; /*to handle commas between elements*/

	if (ht == NULL)
		return;

	putchar('{');

	for (; index < ht->size; index++)
	{
		item = ht->array[index];

		while (item != NULL)
		{
			if (!first)
				printf(", ");
			
			printf("'%s': '%s'", item->key, item->value);
			first = 0;
			item = item->next;
		}
	}
	putchar('}');
	putchar('\n');
}
