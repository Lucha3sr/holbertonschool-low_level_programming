#ifndef DOG
#define DOG

/**
 * struct dog - define a type struct dog .
 * @name: name
 * @owner: owner
 * @age: age
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
