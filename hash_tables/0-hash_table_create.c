#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL if fail
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;

	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);

	for (index = 0; index < table->size; index++)
		table->array[index] = NULL;

	return (table);
}
