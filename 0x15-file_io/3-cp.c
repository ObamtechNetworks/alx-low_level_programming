#include "main.h"
/**
 * cp - function that copies src file into destination
 * @src_fd: the source file descriptor
 * @dest_fd: the destination file descriptor
 * @src_path: the source file path
 * @dest_path: the destination file path
 * Return: nothing
 */
void cp(int src_fd, int dest_fd, const char *src_path, const char *dest_path)
{
	char buffer[BUFF_SIZE];/*max buff size*/
	/*integers to hold file descriptors*/
	int read_src, write_src;
	/*READ SRC FILE AND COPY INTO DEST*/
	while ((read_src = read(src_fd, buffer, BUFF_SIZE)) > 0)
	{
		write_src = write(dest_fd, buffer, read_src);
		if (write_src == -1)
		{
			dprintf(2, "Can't write to %s\n", dest_path);
			exit(99);
		}
	}
	if (read_src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}

	/*handle close errors*/
	if (close(src_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
/**
 * main - a prgm that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: actual argument values from argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	/*create pointers to src and dest files, & as argument vect*/
	const char *src_file, *dest_file;
	int open_src, open_dest;/*variables to hold fd*/

	/*cater for number of arguments*/
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	/*point to the files based on arguments*/
	src_file = argv[1];
	dest_file = argv[2];

	if (src_file == NULL)/*if source file does not exist*/
	{
		dprintf(2, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	/*open files only if they exist: src & dest and handle errors*/
	open_src = open(src_file, O_RDONLY);
	if (open_src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_file);
		close(open_src);/*close the source file*/
		exit(98);
	}
	/*open dest file,trunc if not empty or create if does not exist*/
	open_dest = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (open_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", dest_file);
		close(open_src);/*close the src fd*/
		exit(99);
	}

	/*call the cp function*/
	cp(open_src, open_dest, src_file, dest_file);

	return (0);
}
