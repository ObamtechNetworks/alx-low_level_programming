#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: a pointer to the list to print its element
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	/*create a variable to track the total elements*/
	size_t total_el = 0;
	/*create a pointer that points to h*/
	const list_t *ptr_h = NULL;

	ptr_h = h; /*assign address of h to ptr*/

	/*loop through element of h while it is not NULL*/
	while (ptr_h != NULL)/*while node is not NULL*/
	{
		total_el++;/*count element */
		ptr_h = ptr_h->next;/*point ddto the next node*/
	}
	/*return the number of nodes*/
	return (total_el);
}
