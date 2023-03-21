#include "dog.h"
#include <stdlib.h>

/**
* new_dog - function that creats a new dog
* @name: char name of the dog
* @age: age of the dog
* @owner: owner of dog
* Return: The new struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t another;
dog_t *rtndog = &another;
if (rtndog == NULL || name == NULL || age < 0 || owner == NULL)
	return (NULL);
rtndog->name = name;
rtndog->age = age;
rtndog->owner = owner;
return (rtndog);
}
