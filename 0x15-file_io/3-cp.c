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
	int read_fd, write_fd;
	/*READ SRC FILE AND COPY INTO DEST*/
	while ((read_fd = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		write_fd = write(dest_fd, buffer, read_fd);
		if (write_fd == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", dest_path);
			exit(99);
		}
	}
	if (read_fd == -1)
	{
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
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{/*cater for number of arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src_file = argv[1];/*point to the files based on arguments*/
	dest_file = argv[2];
	/*open files only if they exist: src & dest and handle errors*/
	open_src = open(src_file, O_RDONLY);
	if (open_src == -1 || errno == ENOENT || errno == EACCES)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	if (access(dest_file, R_OK) == -1 || access(dest_file, W_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		close(open_src);
		exit(99);
	}
	open_dest = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (open_dest == -1)
	{
		close(open_src);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	/*call the cp function*/
	cp(open_src, open_dest, src_file, dest_file);

	/*close file descriptors*/
	close(open_src);
	close(open_dest);
	return (0);
}
