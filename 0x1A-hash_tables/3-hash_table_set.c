#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table.
 * In case of collision, add the new node at the beginning of the list.
 * @ht: hash table to add or update the key/value to.
 * @key: the key
 * key cannot be an empty string
 * @value: value associated with the key.
 * value must be duplicated
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *val;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
val = strdup(value);
if (val == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = val;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(val);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = val;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
