#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	(*ndog).name = name;
	(*ndog).age = age;
	ndog->owner = owner;
	return (ndog);
}
