#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to the head of the node
 * @index: the position to add the new node
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	/*empty list*/
	if (head == NULL || *head == NULL)/*empty list && index is 0*/
		return (-1);
	/*if index is 0 - to remove first node*/
	if (index == 0)/*inserting at before head*/
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		(*head) = temp->next; /*exchange head for temp*/
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp && index > 0)/*traverse to desired position*/
	{
		temp = temp->next;
		index--;
	} /*when we've gotten to end and index is still > 1*/
	if (temp == NULL)/*check for invalid index*/
		return (-1);/*index doesn't exist*/

	if (temp->next == NULL)/*if last node*/
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	} /*else delete node at given position*/
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	/*return 1 success*/
	return (1);
}
