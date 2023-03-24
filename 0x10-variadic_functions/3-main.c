#include "variadic_functions.h"
#include <stdio.h>
/**
* print_char - Function that prints characters
* @characters: list passed to the function
* Return: void
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
* print_string - Function that prints a string
* @characters: list passed to the function
* Return: void
*/
void print_string(va_list arg)
{
	va_arg(arg, char *) == NULL?
	printf("(nil)") :
	printf("%s", va_arg(arg, char *));
}

/**
* print_float - Function that prints a float type
* @characters: list passed to the function
* Return: void
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - Function that prints a string
* @characters: list passed to the function
* Return: void
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_all - Function that prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}