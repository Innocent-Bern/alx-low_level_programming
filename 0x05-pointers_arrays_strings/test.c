#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_rev(char *s)
{
    int i = 0;

    while (s[i])
    {
        i++;
    }
    while (i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}


int main(void)
{
    print_rev("Yes");
    return (0);
}