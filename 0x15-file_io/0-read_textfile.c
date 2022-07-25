#include"main.h"
#include"stdlib.h"
#include"stdio.h"
#include"fcntl.h"
#include"sys/stat.h"
#include"sys/types.h"
#include"unistd.h"
/**
 * read_textfile - a function to read from a file
 *@filename: the file to be read
 *@letters: the number of characters to be read
 *Return: on success it returns the number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		ssize_t fd;
		char *buf = NULL;

		fd = open("%d", *filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
			exit(1);
		}
		read(fd, buf, letters - 1);
		close(fd);
		printf("%s\n", buf);
	}
	return (letters - 1);
}
