#include <stdio.h>
#include "main.h"

/**
* main : Entry point
* Description: Fuction that prints the number of arguments passed to it
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    int i = 0;
    for (i = 0; *argv; i++)
    {
        argv++;
    }
    printf("%d\n", argc - 1);
    return (0);
}
