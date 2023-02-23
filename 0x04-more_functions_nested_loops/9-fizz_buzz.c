#include <stdio.h>

/**
* main - Entry point
* Description: prints fizzbuzz for numbers divisible by 5 and 3, buzz for 5 and fizz for 3
* @i: i is an integer
* Return: 0
*/

int main(void)
{
    int i;

    for (i = 1; i <=100; i++)
    {
        if (i % 15 == 0)
        {
          puts ("FizzBuzz");
        }
        else if (i % 5 == 0)
        {
            puts ("Buzz");
        }
        else if (i % 3 == 0)
        {
            puts ("Fizz");
        }
        else
        {
            printf("%d", i);
            putchar('\n');
        }
    }
    return (0);
}
