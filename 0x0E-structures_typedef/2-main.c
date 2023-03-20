#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }
    d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
    d->age < 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
    d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}