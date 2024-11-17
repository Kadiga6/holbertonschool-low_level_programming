#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 *@name: name of dog (type char)
 *@age: age of dog (type float)
 *@owner: name of dog owner (type char)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
