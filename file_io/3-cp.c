#include "main.h"
#define BUFFER_SIZE 1024

void close_file(int fd);
void error_exit(int code, const char *message, const char *filename);

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exits with specific codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		error_exit(99, "Error: Can't write to", argv[2]);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_file(file_from);
			close_file(file_to);
			error_exit(99, "Error: Can't write to", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		error_exit(98, "Error: Can't read from file", argv[1]);
	}

	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_exit - Prints an error message and exits with a code.
 * @code: Exit code.
 * @message: Error message to print.
 * @filename: Filename related to the error (can be NULL).
 */
void error_exit(int code, const char *message, const char *filename)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}


