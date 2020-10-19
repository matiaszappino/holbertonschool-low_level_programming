#ifndef dog_n
#define dog_n
#define dog_n
/**
 * struct dog - writes the character c to stdout
 * @name: name
 * @age: age
 * @owner: owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
