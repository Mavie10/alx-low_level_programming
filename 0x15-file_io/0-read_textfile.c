#include "main.h"
#include <fcntl.h>
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
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
