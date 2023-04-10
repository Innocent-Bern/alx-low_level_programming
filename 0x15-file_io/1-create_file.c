#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - function that appends text at the end of a file.
* @filename: name of the file
* @text_content: text that is to be appended
* Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int handle_open = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	int str_len = 0, handle_write = 0;

	if (handle_open == -1)
		return (-1);

	while (text_content[str_len])
		str_len++;

	handle_write = write(handle_open, text_content, str_len);

	if (handle_write != str_len)
		return (-1);

	close(handle_open);
	return (1);
}

