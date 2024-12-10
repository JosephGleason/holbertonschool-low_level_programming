#include "main.h"

/**
 * create_file - Creates a file and writes content into it.
 * @filename: Name of the file to create.
 * @text_content: Content to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

    /* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

    /* If text_content is NULL, treat it as an empty string */
	if (text_content == NULL)
		text_content = "";

    /* Calculate the length of text_content */
	while (text_content[i] != '\0')
		i++;

    /* Open the file (create or truncate) */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    /* Return -1 if the file cannot be opened */
	if (file == -1)
		return (-1);

    /* Write the content to the file */
	write(file, text_content, i);

    /* Close the file */
	close(file);

	return (1);
}

