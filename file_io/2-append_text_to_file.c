#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to append at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

    /* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

    /* If text_content is NULL, treat it as an empty string */
	if (text_content == NULL)
		text_content = "";

    /* Calculate length of text_content */
	while (text_content[i] != '\0')
		i++;

    /* Open file in append mode */
	file = open(filename, O_WRONLY | O_APPEND);

    /* Return -1 if file cannot be opened */
	if (file == -1)
		return (-1);

    /* Write the content to the file */
	write(file, text_content, i);

    /* Close the file */
	close(file);

	return (1);
}
