#include "dog.h"

/**
* init_dog: entry point
* Description : function that initializes a variable of type struct dog
* @d: struct pointer input
* @name: input char pointer
* @age: input flaot type
* @owner: input char pointer
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    (*d).age = age;
    d->owner = owner;
}
