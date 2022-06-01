#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: text file
 * @letters: number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 * or 0, if filename is NULL, write fails or does not write the expected
 * amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	/*op-open, rd-read, wr-write*/
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL || buf == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (op < 0 || rd < 0 || wr < 0 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);
	return (wr);
}
