#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main : Entry point
* Description: A program that prints the minimum number of coins to make change for an amount of money
* @argc: argumwent count parameter
* @argv: argumwnt variable parameter
* Return : int value
*/

int main( int argc, char *argv[])
{
    int arr[] = {25, 10, 5, 2, 1};
    int i = 0;
    int money = atoi(argv[1]);
    int coins = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    if (atoi(argv[1]) < 0)
    {
        printf("Error\n");
        return (0);
    }
    for (i = 0; 1 < 5; i++)
    {
        if (money == 0)
        {
            break;
        }
        if (money >= arr[i])
        {
            coins += money / arr[i];
            money = money - (money / arr[i]) * arr[i];
        }
    }
    printf("%d\n", coins);
    return (0);
}
