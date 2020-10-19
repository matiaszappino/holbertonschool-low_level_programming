#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - writes the character c to stdout
 * @d: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
		printf("(nil)");

	else
		printf("Owner: %s\n", d->owner);
}
