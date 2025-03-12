#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog_t object, or NULL if failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{return (NULL); }

new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
{return (NULL); }
}

new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
{return (NULL); } 
}

strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;

{return (new_dog); }
}
