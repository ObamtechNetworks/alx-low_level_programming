#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that calculates and prints
 * the minimum number of coins required to
 * make change for a given total (amount);
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	int given_coins[] = {25, 10, 5, 2, 1};/*array of given coins*/
	int given_coins_length = sizeof(given_coins)
		/ sizeof(given_coins[0]);/*length of given coins*/

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", min_num_coins(atoi(argv[1]), given_coins, given_coins_length));
	return (0);
}
