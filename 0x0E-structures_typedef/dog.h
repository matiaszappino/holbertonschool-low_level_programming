#ifndef dog_n
#define dog_n

/**
 * struct dog - struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return always 0
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif
