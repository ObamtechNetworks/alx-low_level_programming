#include <stdio.h>

/**
 * numLength - returns the length of a string
 * @num: the integer number
 *
 * Return: length of number
 */

int numLength(int num)
{
        int length = 0;

        if (!num)
                return (1);
        while (num)
        {
                num = num / 10;
                length += 1;
        }
        return (length);
}

/**
* main - Entry point
* @void: recieves nothing
* Description: a program that prints
* first 98 fibonacci numbers
* Authoer - Ipadeola Bamidele Michael
* Return: Always 0 (Success)
*/

int main(void)
{
	int count, init;
	unsigned long fib1 = 1, fib2 = 2, sum,
		      max = 100000000, fib1o = 0, fib2o = 0, sum2 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fib1o > 0)
			printf("%lu", fib1o);
		init = numLength(max) - 1 - numLength(fib1);

		while (fib1o > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", fib1o);
		sum = (fib1 + fib2) % max;
		sum2 = fib1o + fib2o + (fib1 + fib2) / max;
		fib1 = fib2;
		fib1o = fib2o;
		fib2 = sum;
		fib2o = sum2;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
