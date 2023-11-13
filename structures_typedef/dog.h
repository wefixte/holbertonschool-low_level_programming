#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure pour les chiens
 * @name: nom
 * @age: age
 * @owner: propriétaire
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
