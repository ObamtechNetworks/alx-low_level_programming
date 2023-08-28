#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: pointer to the node to print its element
 * Return: number of nodes/number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/*create a pointer and point it to the passed node*/
	const listint_t *ptr = h;
	/*set it to the passed node*/
	ptr = h;

	/*loop through the node*/
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	/*return number of nodes*/
	return (count);
}
