#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - manually calculates the length of a string
 * @s: string whose length to calculate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
{return len; }
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t struct or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
int i;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{return (NULL); }

name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
name_copy[i] = name[i];
name_copy[_strlen(name)] = '\0';

owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
{return (NULL); }
}
for (i = 0; owner[i] != '\0'; i++)
owner_copy[i] = owner[i];
owner_copy[_strlen(owner)] = '\0';

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

{return (dog); }
}
