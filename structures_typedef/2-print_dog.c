#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 *
 * Description: If an element is NULL, print (nil).
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{return; }

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
