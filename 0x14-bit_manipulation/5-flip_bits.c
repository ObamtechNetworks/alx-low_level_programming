#include "main.h"
/**
 * flip_bits - returns the num of bits need to flip to get a num frm another
 * @n: the number we want to start with
 * @m: the number we want to transform/flip 'n' into
 * Return: the number of difference or bit required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * using the XOR bitwise operator
	 * the XOR bitwsie operator returns true (1) if two bits are different
	 * and then returns false (0), if they are the same
	 * so this way, we can potentially keep track of
	 * how many bits are need to flip inorder to achieve a given number
	 */
	/*create a var to store the comparison result of the XOR operation*/
	unsigned long int XOR_operation;
	/*create counter, create count variable, create bit range varaible*/
	unsigned long int i, count, bit_range = sizeof(unsigned long int) * 8;

	/*initialize counters*/
	i = 0;
	count = 0;
	/*loop through the bits (range) and right shift and compare each bit*/
	while (i < bit_range)
	{
		XOR_operation = (n ^ m) >> i;
		/*compare the result with 1, if true, they are different*/
		if (XOR_operation & 1)
			count++;
		i++;
	}
	return (count);/*the total difference*/
}
