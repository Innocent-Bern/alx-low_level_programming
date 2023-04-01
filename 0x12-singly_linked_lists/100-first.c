#include <stdio.h>

/**
* constructor - function that runs before main
* it is called by the init function.
*/

void __attribute__((constructor)) constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

