#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
* print_elf_header - prints ELF header
* @header: the ELF header to print its contents
* Return: nothing
*/
void print_elf_header(my_Elf_Header header)
{
	printf("    Magic:  %02x %02x %02x %02x\n", header.magic[0],
header.magic[1], header.magic[2], header.magic[3]);
	printf("    Class:                              ELF%d\n",
header.class == 1 ? 32 : 64);
	printf("    Data:                               %s\n", header.data == 1 ?
"2's complement, little endian" : "2's complement, big endian");
	printf("    Version:                            %d (current)\n",
header.version);
	printf("    OS/ABI:                             UNIX - %d\n",
header.os_abi);
	printf("    ABI Version:                        %d\n", header.abi_version);
	printf("    Type:                               %s\n", header.type == 2 ?
"EXEC (Executable file)" : "Unknown");
	printf("    Entry point address:                0x%lx\n", header.entry);
}
/**
* main - entry point
* @argc: number of commandline arguments
* @argv: contents of argc
* Return: 0 success
*/
int main(int argc, char **argv)
{
	int fd = 0; /*file descriptor*/
	my_Elf_Header header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	} /* Open the ELF file for reading */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	} /* Use lseek to position the file cursor at the beginning*/
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("Error seeking to the beginning of the file");
		close(fd);
		exit(98);
	} /* Read the ELF header*/
	if (read(fd, &header, sizeof(my_Elf_Header)) != sizeof(my_Elf_Header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	} /* Check if it's a valid ELF file */
	if (header.magic[0] != 0x7F || header.magic[1] != 'E' ||
			header.magic[2] != 'L' || header.magic[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	} /* Display ELF header information in the specified format*/
	printf("ELF Header:\n");
	print_elf_header(header);
	 /* Close the file descriptor */
	close(fd);
	return (0);
}
