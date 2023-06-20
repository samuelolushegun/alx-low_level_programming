#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of new do
 * @owner: owner fo new dog
 *
 * Return: pointer or Null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *n, *o;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	n = malloc(sizeof(char) * strlen(name) + 1);
	if (n == NULL)
		free(n);
	n = strcpy(n, name);
	o = malloc(sizeof(char) * strlen(owner) + 1);
	if (o == NULL)
		free(o);
	o = strcpy(o, owner);
	(*ndog).name = name;
	(*ndog).age = age;
	ndog->owner = owner;
	return (ndog);
}
