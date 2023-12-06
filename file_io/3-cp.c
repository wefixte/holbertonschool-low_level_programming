#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: always 0.
*/

int main(int argc, char **argv)
{
	int file_source, file_destination, read_file, write_file;
	char buffer[1024]; /*blocks of 1024 bytes*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);
	if (file_source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_destination < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		close(file_source);
		exit(99);
	}

	while ((read_file = read(file_source, buffer, sizeof(buffer))) > 0)
	{
		write_file = write(file_destination, buffer, read_file);
		if (write_file != read_file)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_source);
			close(file_destination);
			exit(99);
		}
	}

	if (read_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_source);
		close(file_destination);
		exit(98);
	}

	if (close(file_source) < 0 || close(file_destination) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(file_source) < 0) ? file_source : file_destination);
		exit(100);
	}
	return (0);
}
