#ifndef DOG
#define DOG

/**
 * struct dog - define a type struct dog .
 * @name: name
 * @owner: owner
 * @age: age
 * Return: Always 0.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
