#include "hash_tables.h"

/**
 * key_index - Get the index for a key given its hash value and the size of the hash table.
 * @key: The key (string) to hash.
 * @size: The size of the hash table.
 *
 * Return: The index of the key using the djb2 hash function modulo the size of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
