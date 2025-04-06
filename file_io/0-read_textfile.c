#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standerd output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, or
 * 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (0);
	}

	if (buffer == NULL)
	{
		perror("Error allocating memory");
		close(fd);
		return (0);
	}

	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		perror("Error reading file");
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		perror("Error writing to stdout");
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);
}
