#include "hash_tables.h"

/**
 * hash_table_delete - Free the hash table and all its nodes.
 * @ht: Pointer to the hash table.
 *
 * This function deallocates all memory allocated for the hash table 'ht',
 * including all its nodes and their associated key-value pairs.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
