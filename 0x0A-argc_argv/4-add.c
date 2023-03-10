#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main : Entry point
* Description: Fuction that adds numbers
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    int i, mysum;

    mysum = 0;

    for (i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) == 0 && *argv[i] != '0')
        {
            printf("Error\n");
            return (0);
        } else
        {
            mysum += atoi(argv[i]);
        }
    }
    printf("%d\n", mysum);
    return (0);
}
