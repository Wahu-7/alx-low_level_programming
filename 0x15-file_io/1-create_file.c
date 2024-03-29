#include "main.h"

/**
 * create_file - Creates a file.
 * @filengthame: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filengthame, char *text_content)
{
	int file_directive, w, length = 0;

	if (filengthame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_directive = open(filengthame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_directive, text_content, length);

	if (file_directive == -1 || w == -1)
		return (-1);

	close(file_directive);

	return (1);
}
