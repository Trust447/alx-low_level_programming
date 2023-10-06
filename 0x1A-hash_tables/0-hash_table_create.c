#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array of the hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table;
	unsigned long int i;

	/* allocate space for the hash table */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table-> = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
