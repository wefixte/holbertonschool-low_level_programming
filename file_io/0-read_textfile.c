#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the given file
 * @letters: number of letters to read and print
 * Return:  actual number of letters it could read and print or 0 if fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*buffer to store the file content*/
	char *buffer;
	int file, read_file, write_file;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	/* si file n'existe pas*/
	if (file < 0)
		return (0);

	buffer = malloc(letters * sizeof(filename));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	/*read content from the file into the buffer*/
	read_file = read(file, buffer, letters);
	if (read_file < 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	/*write the content from the buffer, to the standard output*/
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file < 0 || write_file != read_file)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (write_file);
}
