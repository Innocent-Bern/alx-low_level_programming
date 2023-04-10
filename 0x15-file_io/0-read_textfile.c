#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - function that reads a texfile and prints
*  it out to the POSIX standard output.
* @filename: name of the textfile;
* @letters: Number of letters that should be read and printed.
* Return: Number of letters printed or 0 if an error occurred.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int handle_open = 0;
	unsigned int handle_write = 0;
	char *output_buffer = malloc(sizeof(char) * letters + 1);

	handle_open = open(filename, O_RDONLY);

	if (handle_open == -1)
		return (0);

	read(handle_open, output_buffer, letters);

	handle_write = write(STDOUT_FILENO, output_buffer, letters);

	if (handle_write < letters)
		return (0);

	close(handle_open);
	free(output_buffer);
	return (handle_write);
}

