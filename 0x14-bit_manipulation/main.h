#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_BINARY_SIZE 64

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
char *get_binary(unsigned long int n);


#endif /*_MAIN_H*/
