#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: if filename is NULL return 0
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bw;
	ssize_t tb;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tb = read(fd, buf, letters);
	bw = write(STDOUT_FILENO, buf, tb);

	free(buf);
	close(fd);
	return (bw);
}
