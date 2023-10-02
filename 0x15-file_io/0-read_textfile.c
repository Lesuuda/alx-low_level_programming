#include "main.h"
/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to file to be read
 * @letters: size_t type
 * Return: always successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t fdread, fdwrite;
	char *space;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	space = malloc(sizeof(char) * letters);

	fdread = read(fd, space, letters);

	fdwrite = write(STDOUT_FILENO, space, fdread);

	free(space);
	close(fd);

	return (fdwrite);
}
