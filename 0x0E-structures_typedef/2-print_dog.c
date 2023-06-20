#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	else
	{
		if ((*d).name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", (*d).name);
		if ((*d).age)
			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)\n");
		if ((*d).owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", (*d).owner);
	}
}
