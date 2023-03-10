#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main : Entry point
* Description: Fuction that multiplies two numbers and prints the result
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Error\n");
    } else
    {
        printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    }
    return (0);
}
