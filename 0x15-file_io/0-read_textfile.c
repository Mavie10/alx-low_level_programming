#include "main.h"
#include <stdio.h>

/**
 *ssize_t read_textfile -  reads a file and prints it to the standard output
 *
 * @filname:name of the file to read
 * @letters: the number of bytes
 *
 * return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];
	if (!filename || !letters)
		return (0);
	fd = open(filname, o_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return ("bytes");
}
