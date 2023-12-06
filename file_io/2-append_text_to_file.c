#include "main.h"

/**
 * append_text_to_file -  unction that appends text at the end of a file
 * @filename:
 * @text_content:
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t text_length = 0, write_file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
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
