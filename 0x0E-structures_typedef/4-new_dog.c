#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 * @str: str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i, ii;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii <= i; ii++)
	{
		s[ii] = str[ii];
	}
	return (s);
}

/**
 * *new_dog - create a new dog .
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name, *cpy_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	cpy_name = _strdup(name);
	if (cpy_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	cpy_owner = _strdup(owner);
	if (cpy_owner == NULL)
	{
		free(new_dog);
		free(cpy_name);
		return (NULL);
	}
	new_dog->name = cpy_name;
	new_dog->age = age;
	new_dog->owner = cpy_owner;
	return (new_dog);
}
