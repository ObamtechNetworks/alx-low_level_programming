#include "lists.h"
/**
 * sum_listint - returns the node base on given index
 * @head: the head node
 * Return: the sum of all the data (n) of a list
 */
int sum_listint(listint_t *head)
{
	/* create a pointer to hold the head node */
	listint_t *current_node = head;
	/*initialize a sum variable to hold total sum*/
	int sum = 0;

	/*check if current node is NULL*/
	if (current_node == NULL)
		return (0);

	/*loop through the nodes and sum their data values*/
	while (current_node != NULL)
	{
		/*sum values of node data*/
		sum += current_node->n;

		/*move to next node*/
		current_node = current_node->next;
	}

	return (sum);/*the total sum*/
}
