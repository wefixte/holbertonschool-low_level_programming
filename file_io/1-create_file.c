#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file, write_file, text_length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		write_file = write(file, text_content, text_length);
		if (write_file != text_length)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
