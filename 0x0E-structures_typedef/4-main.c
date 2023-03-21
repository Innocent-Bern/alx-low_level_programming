#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t another;
    dog_t *rtndog = &another;
    rtndog->name = name;
    rtndog->age = age;
    rtndog->owner = owner;
    return (rtndog);
}
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}