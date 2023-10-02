#include "main.h"

/**
 * create_buffer - buffer allocator 1024 bytes.
 * @file: file name for storing chars for.
 *
 * Return: newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - file descriptors closer.
 * @fd: file descriptor to be closed irregardles
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - perform file content coppy.
 * @argc: arguments number by the program
 * @argv: pointers to the arguments.
 *
 * Return: on success it is 0.
 */
int main(int argc, char *argv[])
{
	int from, to, fr, bw;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	fr = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		bw = write(to, buf, fr);
		if (to == -1 || bw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		fr = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (fr > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
