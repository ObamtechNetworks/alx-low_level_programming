#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	int *dp = (int *)malloc((amount + 1) * sizeof(int));
	/*dynamically allocates space in memory for dp */
	if (dp == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	dp[0] = 0; /* set all values of 0 amount to 0*/
	/**
	 * loop through the amount (dynamic programming), to target values
	 * from 0 to the given amount (bottom up approach)
	 */
	for (i = 1; i <= amount; i++)
	{
		/**
		 * assume a larger (infinity) value for amount 1
		 * as the minimum number of coins for a given amount
		 */
		dp[i] = 999999; /*start with an infinity, very large value*/
		/*loop the given coins against each amt & get the min value*/
		for (j = 0; j < given_coins_length; j++)
		{
			/**
			 * check if the value of the current amount (i)
			 * is greater than the current given coin if true, then calculate
			 * the minimum number of coin against that amount
			 * using the dynamic programming technique
			 */
			if (i >= given_coins[j])
			{
				/*value of min. no. of coins would be returned*/
				dp[i] = min(dp[i], dp[i - given_coins[j]] + 1);
			}
		}
	}
	free(dp);/*free the memory after finish using */
	/*the tot. min. no.(of coins)(frm given coins)2 sum up the given amt*/
	return (dp[amount]);
}
