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
	dog_t *doogy;

	if (name == NULL || owner == NULL)
		return (NULL);
	doogy = malloc(sizeof(dog_t));
	if (doogy == NULL)
	{
		free(doogy);
		return (NULL);
	}
	doogy->name = malloc(sizeof(char) * strlen(name) + 1);
	if (doogy->name == NULL)
	{
		free(doogy->name);
	}
	else
		doogy->name = strcpy(doogy->name, name);
	doogy->age = age;
	doogy->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (doogy->owner == NULL)
		free(doogy->owner);
	else
		doogy->owner = strcpy(doogy->owner, owner);
	return (doogy);
}
