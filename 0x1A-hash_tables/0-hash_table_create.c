#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: @size: size of the array of the hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;
	
	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	/* Allocate memory for the hash table's array*/

	table->size = size;
	table->array = calloc((size_t)table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table); /* Free the previously allocated table */
		return NULL;
	}

	return (table);
}
