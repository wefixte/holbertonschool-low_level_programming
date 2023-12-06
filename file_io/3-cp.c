#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: always 0.
*/

int main(int argc, char **argv)
{
	/*argv[0]=prog ; argv[1]=file_source; argv[2]=file_destination*/
	int file_source, file_destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);
	if (file_source < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}

}
