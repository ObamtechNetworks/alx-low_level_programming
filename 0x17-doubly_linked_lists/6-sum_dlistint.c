#include "lists.h"
/**
 * sum_dlistint - returns the sum of all int data(n) of a doubly linked list
 * @head: pointer to the head of the node
 * Return: the sum, 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	/*create a pointer to head*/
	dlistint_t *temp = NULL;
	int sum = 0; /*temp variable to hold total sum*/
	/*CASE1: EMPTY LIST*/
	if (head == NULL)
		return (0);
	/*CASE2: SINGLE NODE*/
	if (head && head->next == NULL)
		return (head->n);
	/*else the need to traverse the list*/
	temp = head;
	while (temp)
	{
		/*add sum to every position*/
		sum += temp->n;
		temp = temp->next;/*move to next pointer*/
	}
	/* return the total sum*/
	return (sum);
}
