#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
	int min_coin = 0; /*start min coint from zero*/
	int cur_min;/*to keep track for continuing dividing coin*/
	int i = 0;/*counter to go through given coins*/
	int cents;

	/*if exactly two arguments is not passed*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);/*the given cent by user*/
	/*if cents is < 0, print 0*/
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/*for the given cent, loop through the given coin*/
	/*then operate on each coins using greedy algorithm*/
	/*then return the min number of coins required/needed to chang*/
	/*e.g if cent = 3, stat wt, 25/3 =8,8= cur, 8/10,*/
	/*the division happens only if user coin is >= any of given coin*/
	while (cents > 0 && i < given_coins_length)
	{
		if (cents >= given_coins[i])
		{
			cur_min = cents / given_coins[i];
			min_coin = min_coin + cur_min;
			cents = cents - (cur_min * given_coins[i]);
		}
		i++;
	}
	printf("%d\n", min_coin);

	return (0);
}
