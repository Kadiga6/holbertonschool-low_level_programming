#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Pointer to the name to assign to the dog.
 * @age: Age to assign to the dog.
 * @owner: Pointer to the owner's name to assign to the dog.
 *
 * Description: This function takes a pointer to a struct dog and assigns
 * values to its members. If the pointer is NULL, the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
