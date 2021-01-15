#include "hash_tables.h"
/**
 * hash_table_get - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * Return: Returns 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indice;
	hash_node_t *hash_node;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	indice = key_index((unsigned const char *)key, ht->size);
	if (indice > ht->size)
		return (NULL);
	hash_node = ht->array[indice];
	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;
	if (hash_node == NULL)
		return (NULL);
	else
		return (hash_node->value);
}
