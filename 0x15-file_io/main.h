#ifndef _MAIN_H
#define _MAIN_H

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