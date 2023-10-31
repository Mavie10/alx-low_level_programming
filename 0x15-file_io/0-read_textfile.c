#include "main.h"

/**
 *read_textfile - Reads a file and prints its content to the standard output
 * @filename: Name of the file to read
 * @letters: The number of bytes to read and print
 *
 * Return: The actual number of bytes read and printed. -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	bytes = read(fd, &buf[0], letters);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (bytes);
}
