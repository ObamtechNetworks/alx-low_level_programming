#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: a pointer to the array object
 * @n: the number of elements in the array
 * Description: A function that reverses the contents
 * of an array of integers
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
