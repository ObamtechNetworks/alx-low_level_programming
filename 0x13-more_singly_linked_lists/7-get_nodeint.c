#include "lists.h"
/**
 * get_nodeint_at_index - returns the node base on given index
 * @head: the head node
 * @index: the index to look for
 * Return: the node base on given index
 */
int get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* create a pointer to hold the head node */
	listint_t ptr_head = NULL;

	/*check if head is NULL*/
	if (head == NULL)
		return (NULL);

	ptr_head = head;

	/*loop through the nodes and get their index */
	while (ptr_head != NULL)
	{
		/*use index 0 as base for returning node*/

		if (index == 0)
			return (ptr);

		/*move to next node */
		ptr = ptr->next;
		index--;/*decrements index in case it starts beyond 0*/
	}
	return (NULL)/*if no valid index*/
}
