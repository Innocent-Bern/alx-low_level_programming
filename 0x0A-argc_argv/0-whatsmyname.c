#include "main.h"

/**
* main : Entry point
* Description: Fuction that prints its filename
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    char *p = argv[0];
    while (*p)
    {
        _putchar(*p);
        p++;
    }
    _putchar('\n');
    return (0);
}
