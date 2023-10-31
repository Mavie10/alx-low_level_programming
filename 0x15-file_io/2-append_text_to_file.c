#include"main.h"
#include <fcntl.h>
#include <unistd.h>
/*
 *append_text_to_file - Appends text content to an existing file
 *
 *@filename:the name of the file to which text will be appended
 *@text_content:The content to append to the file
 *
 * return:On success, 1. On failure, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
