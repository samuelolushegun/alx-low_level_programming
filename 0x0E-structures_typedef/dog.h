#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */
