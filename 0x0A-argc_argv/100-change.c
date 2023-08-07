#include <stdio.h>
#include <stdlib.h>
/**
 * min - returns the minimum value
 * @a: the first integer param to check
 * @b: the second integer param to check
 *
 * Return: the minimum value
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * min_num_coins - returns the minimum number of coins to make a change
 * @amount: the amount to calculate the minimum number of coins
 * required to sum it up
 * @given_coins: an array of given coins to calculate its required minimum
 * @given_coins_length: the length of total coins array
 *
 * Return: the minumum number of coin
 */
int min_num_coins(int amount, int given_coins[], int given_coins_length)
{
	int i, j;/*initialize counter variables for amount and given coins*/
	int *dp = (int *)malloc((amount + 1) * sizeof(int));/*dyn.create space */

	if (dp == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	dp[0] = 0; /* set all values of 0 amount to 0*/
	for (i = 1; i <= amount; i++)
	{
		dp[i] = 99999999; /*initalize first value as max or infinty*/
		for (j = 0; j < given_coins_length; j++)
		{
			if (i >= given_coins[j])
			{
				dp[i] = min(dp[i], dp[i - given_coins[j]] + 1);
			}
		}
	}
	free(dp);
	return (dp[amount]);
}
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
