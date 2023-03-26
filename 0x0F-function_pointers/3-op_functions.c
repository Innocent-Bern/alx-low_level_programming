#include <stdio.h>
#include <stdlib.h>

/**
* op_add - function that adds int a and b
* @a: input integer
* @b: input integer
* Return: int 
*/
int op_add(int a, int b)
{
    return (a + b);
}

/**
* op_sub - function that subtracts int a and b
* @a: input integer
* @b: input integer
* Return: int 
*/
int op_sub(int a, int b)
{
    return (a - b);
}

/**
* op_add - function that multiplies int a and b
* @a: input integer
* @b: input integer
* Return: int 
*/
int op_mul(int a, int b)
{
    return (a * b);
}

/**
* op_add - function that divides int a by b
* @a: input integer
* @b: input integer
* Return: int 
*/
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error");
        exit(100);
    }
    return ( a / b);
}

/**
* op_add - function that returns a % b
* @a: input integer
* @b: input integer
* Return: int 
*/
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error");
        exit(100);
    }
    return ( a % b);
}
