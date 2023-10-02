#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * This function takes the name of a file and
 * string of text content and
 * appends the text to the end of the specified file.
 * If the file does not
 * exist or the user lacks write permissions,
 * or if either the filename or
 * text_content is NULL, the function returns -1.
 * Otherwise, it returns 1 to
 * indicate successful appending.
 *
 * @filename: A pointer to the name of the file to append to.
 * @text_content: The string to append to the end of
 * the file (can be NULL).
 *
 * Return: If the function fails, filename is NULL, or
 * text_content is NULL - -1.
 * If the file does not exist or the user lacks
 * write permissions - -1.
 * Otherwise, it returns 1 to indicate success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	for (len = 0; text_content[len];)
		len++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

