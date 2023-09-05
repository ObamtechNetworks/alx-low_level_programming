#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the file to read its contents
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if file cannot be read or open, or if filename is NULL, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*create a buffer to store the total read file*/
	char *buffer = NULL;
	int opened, read_opened, written;/*variables for system calls*/
	/*EDGE CASES*/
	if (filename == NULL)
		return (0);
	buffer = malloc(letters);/*allocate space for buffer in memory*/
	if (buffer == NULL)/*handle malloc failure*/
		return (0);
	/*open the file and store it's return into an integer as fd*/
	opened = open(filename, O_RDONLY);
	if (opened == -1)
	{/*free buffer and return 0*/
		free(buffer);
		return (0);
	}
	/*read the opened file and store in an integer for writing*/
	read_opened = read(opened, buffer, letters);
	/*handle error while opening or reading file*/
	if (read_opened == -1)
	{/*free buffer, close opened file and return 0*/
		free(buffer);
		close(opened);
		return (0);
	}
	/*writefile to POSIX stdout and store total writen to an integer*/
	written = write(STDOUT_FILENO, buffer, read_opened);
	/*if write fails or does not write the given bytes*/
	if (written == -1 || written != read_opened)
	{
		free(buffer);
		close(opened);
		return (0);
	}
	close(opened);/*close the opened file*/
	free(buffer);/*free buffer*/
	return (written);/*return the number of bytes written*/
}
