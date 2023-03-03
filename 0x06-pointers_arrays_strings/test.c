#include <stdio.h>
#include <string.h>
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] -= 32;
        }
		index++;
	}

	return (str);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";

    printf(cap_string(str));
    return (0);
}