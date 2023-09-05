#include "main.h"
/**
 * append_text_to_file - a function that appends text to a file
 * @filename: pointer to the file to append text to
 * @text_content: NULL terminated string to append to file
 * Return: 1 on success, -1 on failure to create file or write to file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, append;/*variables for system calls*/
	/*text to write size*/
	int text_size;

	/*EDGE CASES*/
	if (filename == NULL)
		return (-1);

	/*open the file, and add append macro permision */
	open_file = open(filename, O_WRONLY | O_APPEND);
	/*handle error cases*/
	if (open_file == -1)
		return (-1);

	/*append texts to file only when text content is not NULL*/
	if (text_content != NULL)
	{
		text_size = 0;
		for (text_size = 0; text_content[text_size]; text_size++)
			;
		/*apped texts into the file*/
		append = write(open_file, text_content, text_size);
		/*handle error cases*/
		if (append == -1)
		{
			close(open_file);/*close created file/file descriptor*/
			return (-1);
		}
	}
	/*if text_content is NULL and file exists, return 1*/
	else
		if (text_content == NULL && filename)
			return (1);

	/*close the file descriptor*/
	close(open_file);
	return (1);
}
