#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: the number we want to set it bit value at particular index
 * @index: the index of the binary bits statring from 0
 * Return: 1 if success or -1 if an error occcured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*create a var to store bit_mask of index that we want to set to 0*/
	unsigned long int bit_mask = 1 << index;

	/*check for out of bounds or out of range index*/
	if (index >= sizeof(*n) * 8)/*within range/sizeof int pointed to *n*/
		return (-1);

	/*compute bitwise & of *n with the bitmask to set the bit at index*/
	*n = *n & (~bit_mask);

	return (1);/*if successful*/
}
