#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to the head of the node
 * @idx: the position to add the new node
 * @n: the data value to set for the new node
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node = NULL;/*create the new node*/

	new_node = malloc(sizeof(dlistint_t));/*alloc space for new node*/
	if (new_node == NULL) /*handle malloc return*/
		return (NULL);
	new_node->n = n; /*set the data part of new node*/
	new_node->prev = NULL;/*set prev node of new node*/
	if (*h == NULL && idx == 0)/*empty list && index is 0*/
	{
		*h = new_node;
		return (new_node);/*return the head*/
	} /* traverse the list, based on head and index*/
	if (idx == 0)/*inserting at before head*/
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp && idx > 1)/*traverse to desired position*/
	{
		temp = temp->next;
		idx--;
	} /*when we've gotten to end and index is still > 1*/
	if (temp == NULL && idx > 1)/*check for invalid index*/
	{
		free(new_node);/*free allocation*/
		return (NULL);/*index doesn't exist*/
	}
	if (temp->next == NULL)/*if last node*/
	{
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	} /*else insert at node in-between*/
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
