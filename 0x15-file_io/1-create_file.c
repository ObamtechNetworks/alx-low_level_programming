#include "main.h"
/**
 * create_file - a function that creates file
 * @filename: pointer to the to create
 * @text_content: the string to write to the file
 * Return: 1 on success, -1 on failure to create file or write to file
 */
int create_file(const char *filename, char *text_content)
{
	int created, write_to_file;/*variables for system calls*/
	/*text to write size*/
	int text_size;

	/*EDGE CASES*/
	if (filename == NULL)
		return (-1);

	/*create the file, and set mode to user rw and other none*/
	created = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	/*handle error cases*/
	if (created == -1)
		return (-1);

	/*write to file when text content is not NULL*/
	if (text_content != NULL)
	{
		text_size = 0;
		for (text_size = 0; text_content[text_size]; text_size++)
			;
		/*write into the file*/
		write_to_file = write(created, text_content, text_size);
		/*handle error cases*/
		if (write_to_file == -1)
		{
			close(created);/*close created file/file descriptor*/
			return (-1);
		}
	}
	/*close the file descriptor*/
	close(created);
	return (1);
}
