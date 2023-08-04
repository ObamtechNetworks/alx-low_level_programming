#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks the primality of a number (isprime or not)
 * @n: the parameter to check if its a prime number
 * Description: A function that checks if a number is prime number or not
 * Return: 1 if the input integer is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));/* start to test a number if
			       *it is a prime or not
			       * recursively
			       */
}

/**
 * is_prime - the function that actually checks if a number is a prime number
 * @n: the parameter the test if it's a prime number
 * @guess: the number to check if the result of
 * it's square root returns a remainder 0 or not
 * Description: This approach actually makes use of what we called
 * the Trial division method
 * The Trial Division method tests for primality by first finding the integer
 * squareroot value of the guess number and then from that number
 * downwards, it checks the remainder value when n % guess is done
 * if it returns 0 or not
 * if 0 n is not prime, if 1, n is prime.
 * Return: the prime value
 */

int is_prime(int n, int guess)
{
	if (guess <= 1) /* 0 or 1 are not prime numbers */
		return (0);
	
	if (guess * guess > n)
		return (1); /** n is a prime number*/

	if (n % guess == 0)
		return (0); /** not a prime number,
			     * if n is divisible by guess
			     */

	if (guess * guess > n)
		return (1); /** n is a prime number*/

	return (is_prime(n, guess + 1)); /** test another number */
}

