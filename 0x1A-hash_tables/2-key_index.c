#include "hash_tables.h"
/**
 * key_index - gives index of a key
 *
 * @key: the key to obtain index from
 * @size: array size
 * Return: index at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
