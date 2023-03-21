#include "dog.h"
#include <stdlib.h>

/**
* dog_t: entry point
* Description: function that creats a new dog
* @name: char name of the dog
* @age: age of the dog
* @owner: owner of dog
* Return : pointer of dog_t
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
