#include <stdio.h>
#include <stdlib.h>
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
int i;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{return (NULL); }

new_dog->name = malloc(0);
if (new_dog->name == NULL)
{
free(new_dog);
{return (NULL); }
}

new_dog->owner = malloc(0);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
{return (NULL); }
}

i = 0;
while (name[i] != '\0')
{
new_dog->name[i] = name[i];
i++;
}
new_dog->name[i] = '\0';

i = 0;
while (owner[i] != '\0')
{
new_dog->owner[i] = owner[i];
i++;
}
new_dog->owner[i] = '\0';

new_dog->age = age;

{return (new_dog); }
}
