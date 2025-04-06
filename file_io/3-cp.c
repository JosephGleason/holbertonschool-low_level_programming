#include "main.h"

/**
 * handle_error - Handles errors by printing messages and exiting.
 * @code: Exit code.
 * @filename: Filename associated with the error.
 */
void handle_error(int code, char *filename)
{
	if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	else if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buf[1024];

	if (ac != 3)  /* Check the number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)  /* Error opening file_from */
		handle_error(98, av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)  /* Error opening or creating file_to */
		handle_error(99, av[2]);

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1)  /* Error writing to file_to */
			handle_error(99, av[2]);
	}
	if (r == -1)  /* Error reading from file_from */
		handle_error(98, av[1]);

	if (close(fd_from) == -1)
		handle_error(100, av[1]);
	if (close(fd_to) == -1)
		handle_error(100, av[2]);

	return (0);
}

