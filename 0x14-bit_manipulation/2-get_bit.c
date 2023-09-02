#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: the number we want to get it bit value at particular index
 * @index: the index of the binary bits statring from 0
 * Return: the value of the bit at index index or -1 if an error occcured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check for out of bounds or out of range index*/
	if (index >= sizeof(unsigned long int) * 8)/*when index is >32bit*/
		return (-1);
	/*get the right most bit value, but leftshifting the 1 by index*/
	/*then compare result by performing bitwise AND on the numb and index*/
	/*if the result is true (set) return 1, else return 0*/
	if (n & (1 << index))
		return (1);
	else
		return (0);/*if error occured*/
}
