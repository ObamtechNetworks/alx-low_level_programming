#include <stdarg.h>

/**
 * sum_them_all - a function that sums up varying number of arguments
 * @n: the first parameter to start summ from
 * Description: A function that receives a varying number
 * of valid integers and sums them all up
 *
 * Return: 0 if n == 0 else, the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0, next_args;

	/* begin variable argument iteration */
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	/* retrieve the arguments */
	va_start(args, n);

	/* keep iterating as many arguments as given */
	for (i = 0; i < n; i++)
	{
		/* set the next argument to follow the previous pattern */
		next_args = va_arg(args, unsigned int);
		sum += next_args;
	}
	/* end of variable arguments */
	va_end(args);

	return (sum);
}
