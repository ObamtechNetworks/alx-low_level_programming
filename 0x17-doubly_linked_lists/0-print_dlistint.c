#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head node
 * Return: the numberof nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*creat a temp pointer for traversing*/
	const dlistint_t *temp = NULL;
	int count = 0; /*intialize a counter for num of nodes*/
	/*CASE 1: head and prev of head is empty*/
	if (h->prev == NULL && h == NULL)
		return (0);
	/*CASE 2: only one node*/
	if (h->prev == NULL && h != NULL && h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	/*CASE3: if prev of head is not NULL*/
	if (h->prev != NULL)
	{
		while (h->prev != NULL) /*TRAVERSE BACK TO the head*/
			h = h->prev;
	}
	/*set temp to point to head*/
	temp = h;
	/*traverse the list now to print elements*/
	while (temp != NULL)
	{
		/*print data at each position*/
		printf("%d\n", temp->n);
		count += 1;
		/*move to next pointer*/
		temp = temp->next;
	}
	/* return counter*/
	return (count);
}
