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
 * exit_src_100 - exits src file descriptor with code 100
 * @src_fd: the src file descriptor
 * Return: nothing
 */
void exit_src_100(int src_fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
	exit(100);
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
}
/**
 * main - a prgm that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: actual argument values from argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	const char *src_file, *dest_file;/*ptrs-> src/dest files*/
	int src_fd, dest_fd, cls_src, cls_dest;
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{/*cater for number of arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src_file = argv[1];/*point to the files based on arguments*/
	dest_file = argv[2];
	/*if src file does not exist or source file is not readable*/
	if (access(src_file, F_OK) == -1 || (access(src_file, R_OK) == -1))
		exit_98(src_file);

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		exit_98(src_file);/*error while opening file*/
	/*if dest file exists but not readable*/
	if ((access(dest_file, F_OK) != -1) && (access(dest_file, R_OK) == -1))
		exit_99(dest_file);
	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (dest_fd == -1)
	{
		close(src_fd);/*close the src fd*/
		exit_99(dest_file);
	}
	cp(src_file, dest_file, src_fd, dest_fd);/*copy files*/
	cls_src = close(src_fd); /*close file descriptors*/
	cls_dest = close(dest_fd);
	if (cls_src == -1)/*handle close errors*/
		exit_src_100(src_fd);
	if (cls_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	return (0);
}
