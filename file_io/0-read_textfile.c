#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: selfexplained
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char * buf = malloc(letters);
	int leer, escr, fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	leer = read(fd, buf, letters);
	escr = write(STDIN_FILENO, buf, leer);
	close(fd);
	
	return(escr);
}
