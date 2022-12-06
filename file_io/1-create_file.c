#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: selfexplained
 * @text_content: is a NULL terminated string to write to the file
 * Return: the actual number of letters it could read and print
*/

int create_file(const char *filename, char *text_content)
{

	int abrir, escr, text_lenght;

	if (filename == NULL)
		return (-1);

	abrir = open (filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);

	if (abrir == -1)
		return(-1);

	text_lenght = strlen(text_content);

	if (text_lenght == 0)
		return(1);

	escr = write(abrir, text_content, text_lenght);
	if (escr == -1)
		{
			close (abrir);
			return (-1);
		}

	close (abrir);

return(1);
}
