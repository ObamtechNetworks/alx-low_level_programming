#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointe to the node to print its element
 * Return: number of nodes/number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/*create a pointer and point it to the passed node*/
	const listint_t *list_ptr = h;
	/*set it to the passed node*/
	list_ptr = h;

	/*loop through the node*/
	while (list_ptr != NULL)
	{
		count++;
		list_ptr = list_ptr->next;
	}
	/*return number of nodes*/
	return (count);
}
