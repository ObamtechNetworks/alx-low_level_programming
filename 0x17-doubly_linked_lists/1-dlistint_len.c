#include "lists.h"
/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*creat a temp pointer for traversing*/
	const dlistint_t *temp = NULL;
	int count = 0; /*intialize a counter for num of nodes*/
	/*CASE 1: if head is empty*/
	if (h == NULL)
		return (0);
	/*CASE3: if prev of head is not NULL*/
	if (h && h->prev != NULL)
	{
		while (h->prev != NULL) /*TRAVERSE BACK TO the head*/
			h = h->prev;
	}
	/*set temp to point to head*/
	temp = h;
	/*traverse the list now to print elements*/
	while (temp != NULL)
	{
		count += 1;
		/*move to next pointer*/
		temp = temp->next;
	}
	/* return counter*/
	return (count);
}
