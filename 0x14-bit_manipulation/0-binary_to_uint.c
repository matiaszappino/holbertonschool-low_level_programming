#include <stdio.h>
#include "holberton.h"
/**
 * listint_len - function to return de number of nodes
 * @h: pointer to list
 * Return: the number of nodes
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int val = 0;
  int i = 0;
  if (b == NULL)
    return 0;
  while (b[i] == '0' || b[i] == '1')
  {
	val <<= 1;
	val += b[i]-'0';
	i++;
  }
  return val;
}
