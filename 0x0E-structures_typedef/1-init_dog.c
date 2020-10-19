/**
 * init_dog - writes the character c to stdout
 * d: pointer
 * name: name of the dog
 * age: age of the dog
 * owner: name of the owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
