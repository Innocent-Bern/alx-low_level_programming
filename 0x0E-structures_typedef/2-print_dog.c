#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* print_dog: entry point
* Description: function that prints a struct dog
* @d: pointer input to struct dog
* Return : void
*/

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }
    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
