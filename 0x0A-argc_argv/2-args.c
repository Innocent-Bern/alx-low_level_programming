#include <stdio.h>
#include "main.h"

/**
* main : Entry point
* Description: Fuction that prints all the arguments passed to it
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    int i;
    if (argc == 1)
    {
        printf("%s\n", argv[0]);
    } else
    {
        for (i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    return (0);
}
