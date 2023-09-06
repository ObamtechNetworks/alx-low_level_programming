#include "main.h"
/**
 * file_exists - checks if a file exists
 * @path: the path to the file
 * Return: a non negative value if success
 */
int file_exists(const char *path)
{
	return (access(path, F_OK) != -1);
}
/**
 * is_readable - checks if a file is readable
 * @path: the path to the file
 * Return: a non negative value on success
 */
int is_readable(const char *path)
{
	return (access(path, R_OK) != -1);
}
/**
 * is_writeable - checks if a file is writeable
 * @path: the path to the file
 * Return: a non-negative integer on success
 */
int is_writeable(const char *path)
{
	return (access(path, W_OK) != -1);
}
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
	int read_fd, write_fd;
	/*READ SRC FILE AND COPY INTO DEST*/
	while ((read_fd = read(src_fd, buffer, BUFF_SIZE)) > 0)
	{
		write_fd = write(dest_fd, buffer, read_fd);
		if (write_fd == -1 ||  write_fd != read_fd)
		{
			close(src_fd);
			close(dest_fd);
			dprintf(STDERR_FILENO, "Can't write to %s\n", dest_path);
			exit(99);
		}
	}

	if (read_fd == -1)
	{
		close(src_fd);
		close(dest_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}
	/*handle close errors*/
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
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

	if (argc != 3)
	{/*cater for number of arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src_file = argv[1];/*point to the files based on arguments*/
	dest_file = argv[2];
	/*check source file doesn't exist or is not readable or writeable*/
	if (!file_exists(src_file) || !is_readable(src_file)
			|| !is_writeable(src_file))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	open_src = open(src_file, O_RDONLY);/*open files:src/dest/handle errs*/
	if (open_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	/*open dest file,trunc if not empty or create if does not exist*/
	open_dest = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (open_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		close(open_src);/*close the src fd*/
		exit(99);
	}
	if ((file_exists(dest_file) && !is_readable(dest_file))
			|| !is_writeable(dest_file))/*if file && !readable*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	cp(open_src, open_dest, src_file, dest_file);/*call the cp function*/
	return (0);
}
