#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	int handle_open_to = 0, handle_open_from = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	handle_open_to = open(file_from, O_RDWR | O_TRUNC | O_CREAT);
}
