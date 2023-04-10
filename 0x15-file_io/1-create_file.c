#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - Function that creates a file.
 * @filename: variable pointer
 * @text_content: Content file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
