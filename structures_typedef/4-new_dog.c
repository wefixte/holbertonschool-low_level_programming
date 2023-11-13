#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: nom
 * @age: age
 * @owner: owner
 * Return: pointer or NULL if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	/*declare a pointer to a structure of type dog_t*/
	/*pointer used to store the memory adress*/
	/*of a dynamically allocated dog_t structure*/

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (strlen(name) + 1));
	doggy->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}

	strcpy(doggy->name, name);
	doggy->age = age;
	strcpy(doggy->owner, owner);

	return (doggy);
}
