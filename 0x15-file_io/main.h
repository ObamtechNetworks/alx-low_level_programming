#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct my_Elf_Header - header for ELf file
 * @magic: this is a set of bytes that indicates that the file is in ELF format
 * @class: this defines if the format is in 64-bit or 32-bit
 * @data: this specifies the byte order (little endian or big endian)
 * @version: ELF header version
 * @os_abi: the operating system and application binary interface for the file
 * @abi_version: the version of the ABI
 * @padding: to maintain formating
 * @type: describes the type of the ELF file (if executable, shared lib etc)
 * @machine: specifies the type of machine
 * @version2: tells the version two of the file
 * @entry: the entry point of the  file
 * @phoff: the phone off
 * @shoff: the sho off
 * @flags: flags for different cases
 * @ehsize: the ehsize
 * @phentsize: the phentsize
 * @phnum: the phnum
 * @shentsize: the shentsize
 * @shnum: the shnum
 * @shstrndx: the shstrndx
 */
/*my elf header*/
typedef struct my_Elf_Header
{
unsigned char magic[4];
unsigned char class;
unsigned char data;
unsigned char version;
unsigned char os_abi;
unsigned char abi_version;
char padding[7];
short type;
short machine;
int version2;
unsigned long entry;
unsigned long phoff;
unsigned long shoff;
int flags;
short ehsize;
short phentsize;
short phnum;
short shentsize;
short shnum;
short shstrndx;
} my_Elf_Header;

/*define max_buff_size*/
#define BUFF_SIZE 1024

/*--------------*/
/*standard headers*/
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
/*--------------------*/

/*function prototypes/signatures*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /*_MAIN_H*/
