#include "hash_tables.h"
/**
 * hash_table_create - a table that takes in an index and gives out the value stored in the index
 *
 * @unsigned long int size: the index parsed to the function
 * Return table if successful
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;
	
	
	table = malloc(sizeof(hash_table_t));
	if (table)
		return (NULL);
	if (table == NULL)
	{
		return NULL; /* Return NULL on malloc failure*/
	}

	/* Allocate memory for the hash table's array*/

	table->size = size;
	table->array = calloc((size_t)table->size, sizeof(hash_node_t *)));
	if (table->array == NULL)
	{
		free(table); /* Free the previously allocated table */
		return NULL;
	}

	return (table);
}
