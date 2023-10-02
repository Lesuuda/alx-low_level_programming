#include "main.h"
/**
 * read_textfile - function to read and write  FILE
 * @filename: pointer to the file
 * @letters: number of letters that have been input
 * Return: always 0 when succesful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdread, fdwrite, fdclose;
	char *length;

	if (filename == NULL)
		return (0);
	length = malloc(sizeof(char) * letters);
	if (length == NULL)
		return (-1);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	fdread = read(fd, length, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, length, fdread);
	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
