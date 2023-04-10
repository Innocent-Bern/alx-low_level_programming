#include "main.h"
#include <unistd.h>

/**
* read_textfile - function that reads a texfile and prints
*  it out to the POSIX standard output.
* @filename: name of the textfile;
* @letters: Number of letters that should be read and printed.
* Return: Number of letters printed or 0 if an error occurred.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t count = write(1, filename, letters);
	return (count >= 0 ? count : 0);
}

