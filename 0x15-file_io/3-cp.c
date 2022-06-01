#include "main.h"
#include <stdio.h>

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to be closed
 *
 * Return: void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int op1, op2, rd, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	op1 = open(argv[1], O_RDONLY);
	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	rd = read(op1, buf, 1024);
	do {
		if (op1 < 0 || rd < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(op2, buf, rd);
		if (op2 < 0 || wr < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rd = read(op1, buf, 1024);
	} while (rd > 0);

	close_file(op1);
	close_file(op2);
	return (0);
}
