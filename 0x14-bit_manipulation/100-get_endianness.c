#include "main.h"
/**
 * get_endianness - checks the endianness of a particular system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/*declare and intitalize a variable(integer) with a known value in hex*/
	int data = 0x01;
	/*declare/init a ptr to the addr. of num above, cast it to a ptr to chars*/
	char *byte_ptr = (char *)&data;

	/*check endianness based on least significant byte (LSB)*/
	if (*byte_ptr == 0x01)
		return (1);/*for little endian*/
	else
		return (0);/*for big endian*/
}
