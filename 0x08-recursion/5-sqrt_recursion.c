#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a given number n
 * @n: the paramert to calucate it's squareroot
 * Description: A function that calcutes the natural squareroot
 * of a given number using recursion technique
 * Return: -1 if n does not have a square root else squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);/** negative numbers don't
			       * have integer square roots
			       */
	return (find_sqrt(n, 1));/**
				  * start to guess the squareroot
				  * of n as 1
				  * by calling the find_sqrt fxn
				  * recursively
				  */
}

/**
 * find_sqrt - the function to calculating the actual sqrt
 * @n: the parameter the test guess with if true;
 * @guess: the number to check if it's square is equal the squareroot of n
 *
 * Return: the found square root or -1;
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess); /** we have found the squareroot */

	if (guess * guess > n)
		return (-1); /** This means, that number is not a sqaureroot */

	return (find_sqrt(n, guess + 1)); /** try another guess */
}

