#include "main.h"

/**
 * close_and_free - close file and free pointer
 * @fd: file descriptor of file to close
 * @ptr: pointer to free
 * Return: void
 */
void close_and_free(int fd, char *ptr)
{
	close(fd);
	free(ptr);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename: filename to read
 * @letters: number of letters to read.
 * Return: number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_written = 0;
	char *buffer;

	if (letters < 1)
	{
		return (0);
	}
	if (filename == NULL || (*filename) == '\0')
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_written = read(fd, buffer, letters);
	if (bytes_written < 0)
	{
		close_and_free(fd, buffer);
		return (0);
	}
	buffer[letters] = '\0';
	bytes_written = write(1, buffer, letters);
	if (bytes_written < 0)
	{
		close_and_free(fd, buffer);
		return (0);
	}
	close_and_free(fd, buffer);
	return (bytes_written);
}
