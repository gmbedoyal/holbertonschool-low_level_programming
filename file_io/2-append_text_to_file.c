#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: selfexplained
 * @text_content: is a NULL terminated string to add at end of file
 * Return: the actual number of letters it could read and print
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int abrir, escr, text_lenght;
	
	if (filename == NULL)
		return (-1);
	
	abrir = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
		return (1);

	if (abrir == -1)
		return (-1);

	text_lenght = strlen(text_content);

	escr = write(abrir, text_content, text_lenght);
	
	if (escr == -1)
	{
		close(abrir);
		return (-1);
	}

	close(abrir);

return (1);
}
