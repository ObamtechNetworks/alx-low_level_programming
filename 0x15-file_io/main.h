#ifndef _MAIN_H
#define _MAIN_H

/*--------------*/
/*standard headers*/
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
/*--------------------*/

/*function prototypes/signatures*/
ssize_t read_textfile(const char *filename, size_t letters);


#endif /*_MAIN_H*/
