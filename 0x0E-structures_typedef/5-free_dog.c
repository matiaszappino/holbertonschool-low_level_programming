#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - return name of the file asdasgassgasg
 * @d :asfgasgdshd
 *
 * Return: return always 0
 */

void free_dog(dog_t *d)
{
if (d == '\0')
return;

free(d->name);
free(d->owner);
free(d);
}
