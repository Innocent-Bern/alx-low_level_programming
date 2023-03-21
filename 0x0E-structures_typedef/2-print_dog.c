#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* print_dog - function that prints a struct dog
* @d: pointer input to struct dog
* Return : void
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;
d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
d->age < 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
