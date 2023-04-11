#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
* main - A function that copies content of a file to another file.
* @argc: Argument count. Number of arguments the function has.
* @argv: Argument vector. Array containing the passed CLI arguments
* Return: Number of bytes copied
*/

int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	char *buff = NULL;
	int handle_open_from = 0, handle_open_to = 0;
	int handle_read = 1, handle_write = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	handle_open_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	handle_open_from = open(file_from, O_RDONLY);

	if (handle_open_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (handle_open_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}
	while (handle_read != 0 || handle_read == -1)
	{
		buff = malloc(sizeof(char) * 1024 + 1);
		handle_read = read(handle_open_from, buff, 1024);
		handle_write += write(handle_open_to, buff, handle_read);
		free(buff);
	}
	if (close(handle_open_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", handle_open_from);
		exit(100);
	}
	if (close(handle_open_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", handle_open_to);
		exit(100);
	}
	return (handle_write);
}
