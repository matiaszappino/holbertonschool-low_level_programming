#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: d
 * @c: s
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}
else
{
array = (char *)malloc(size * (sizeof(char)));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
array[i] = c;
}
return (array);
}
}
