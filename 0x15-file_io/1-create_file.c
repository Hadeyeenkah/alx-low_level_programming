#include "main.h"

/**
 * create_file - Creates a new file or truncates an existing one.
 *
 * This function takes the name of a file and an optional string of text
 * content to write to the file. It opens the file (or creates it if it
 * doesn't exist), writes the provided text content to it, and then closes
 * the file.
 *
 * @filename: A pointer to the name of the file to create or truncate.
 * @text_content: A pointer to a string to write to the file (can be NULL).
 *
 * Return: If the function fails to create or write to the file, it returns -1.
 * Otherwise, it returns 1 to indicate success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

