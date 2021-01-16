#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value
 * Return: Returns 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy, *key_copy;
	unsigned long int indice, i;
	hash_node_t *new_element;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	if (value == NULL)
		return (0);
	copy = strdup(value);
	indice = key_index((const unsigned char *)key, ht->size);
	for (i = indice; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	key_copy = strdup(key);
	new_element->key = key_copy;
	new_element->value = copy;
	new_element->next = ht->array[indice];
	ht->array[indice] = new_element;
	return (1);
}
