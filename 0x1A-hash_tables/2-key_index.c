#include "hash_tables.h"

/**
 * key_index - Gives the index of a key/value
 * pair should be stored in array of a hash table
 * @key: The key to get the index of
 * @size: The size of the array of the hash table
 *
 * Description: Uses the djb2 algorithmn
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
