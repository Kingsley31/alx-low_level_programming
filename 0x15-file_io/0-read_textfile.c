#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename: filename to read
 * @letters: number of letters to read.
 * Return: number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_written = 0;
	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
		return (0);
	if (filename == NULL || (*filename) == '\0')
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	bytes_written = read(fd, buffer, letters);
	if (bytes_written < 0)
		return (0);
	buffer[letters] = '\0';
	bytes_written = write(1, buffer, letters);
	if (bytes_written < 0)
		return (0);
	return (bytes_written);
}
