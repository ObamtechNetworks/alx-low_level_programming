#include "main.h"
/**
 * exit_98 - print exit status and exit with 98
 * @src_path: - path to source file
 * Return: nothing
 */
void exit_98(const char *src_path)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
	exit(98);
}
/**
 * exit_99 - print exit status and exit with 99
 * @dest_path: path to dest file
 * Return: nothing
 */
void exit_99(const char *dest_path)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_path);
	exit(99);
}
/**
 * cp - function that copies src file into destination
 * @src_fd: the source file descriptor
 * @dest_fd: the destination file descriptor
 * @src_path: the source file path
 * @dest_path: the destination file path
 * Return: nothing
 */
void cp(const char *src_path, const char *dest_path, int src_fd, int dest_fd)
{
	char buffer[BUFF_SIZE];/*max buff size*/
	/*integers to hold file descriptors*/
	int read_fd, write_fd;
	/*READ SRC FILE AND COPY INTO DEST*/
	while ((read_fd = read(src_fd, buffer, BUFF_SIZE)) > 0)
	{
		/*keep track of how many bytes is written*/
		write_fd = write(dest_fd, buffer, read_fd);
		if (write_fd == -1 || write_fd < read_fd)
		{
			close(src_fd);
			close(dest_fd);
			exit_99(dest_path);
		}
	}
	if (read_fd == -1)
	{
		close(src_fd);
		close(dest_fd);
		exit_98(src_path);
	}
	if (close(src_fd) == -1)/*handle close errors*/
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
	int src_fd, dest_fd;
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{/*cater for number of arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src_file = argv[1];/*point to the files based on arguments*/
	dest_file = argv[2];
	if ((access(dest_file, F_OK) != -1) && (access(dest_file, R_OK) == -1))
		exit_99(dest_file);
	if ((access(src_file, R_OK) != -1) && (access(src_file, F_OK) != -1))
	{
		src_fd = open(src_file, O_RDONLY);
		if (src_fd == -1)
			exit_98(src_file);/*error while opening file*/
	}
	else
		exit_98(src_file);
	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (dest_fd == -1)
	{
		close(src_fd);/*close the src fd*/
		exit_99(dest_file);
	}
	cp(src_file, dest_file, src_fd, dest_fd);/*copy files*/

	close(src_fd);
	close(dest_fd);
	return (0);
}
