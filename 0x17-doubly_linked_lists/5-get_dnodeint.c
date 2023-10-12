#include "lists.h"
/**
 * get_dnodeint_at_index - retrieves a node at given index
 * @head: pointer to the head of the node
 * @index: the position of the node to retrieve
 * Return: the node at that position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* create a pointer to the head pointer*/
	dlistint_t *temp = NULL;
	/*check if head is NULL to return NULL*/
	if (head == NULL)
		return (NULL);
	/*check if index is 1, to return head as first position*/
	if (index == 0 && head != NULL)
		return (head);
	/* traverse the list, based on head and index*/
	temp = head;
	while (temp && index != 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL && index != 0)
		return (NULL);/*index doesn't exist*/

	/*else return the position*/
	return (temp);
}
