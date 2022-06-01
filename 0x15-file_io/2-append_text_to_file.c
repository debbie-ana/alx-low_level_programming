#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Description - do not create file if it does not exist
 * if text_content is NULL, do not add anything to the file
 * Return: 1 on success and -1 on failure, 1 if the file exists and -1
 * if the file does not exist or you don't have the required permissions
 * to write the file or if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);
	if (op < 0 || wr < 0)
		return (-1);
	close(op);
	return (1);
}
