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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
#ifndef dog_n
#define dog_n
#define dog_n
/**
 * struct dog_t - writes the character c to stdout
 * @name: name
 * @age: age
 * @owner: owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;
#endif
