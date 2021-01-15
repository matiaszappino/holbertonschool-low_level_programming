#include "hash_tables.h"
/**
 * hash_table_print - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * Return: Returns 1 if it succeeded, 0 otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int flag;

	flag = 0;
	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
		while (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			flag = 1;
			ht->array[i] = ((ht->array[i])->next);
		}
	printf("}\n");
}
