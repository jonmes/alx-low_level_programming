#include "hash_tables.h"

/**
 * key_index-gives for the index of a key
 * @key:main value
 * @size:size of a given value
 * Return:value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
