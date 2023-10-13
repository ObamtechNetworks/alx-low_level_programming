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
	dlistint_t *temp = NULL;/* create a pointer to the head pointer*/
	dlistint_t *new_node = NULL;/*create the new node*/

	new_node = malloc(sizeof(dlistint_t));/*alloc space for new node*/
	if (new_node == NULL) /*handle malloc return*/
		return (NULL);
	new_node->n = n; /*set the data part of new node*/
	new_node->prev = NULL;/*set prev node of new node*/
	/*check if head is NULL to set as new node*/
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);/*return the head*/
	}
	temp = *h; /* traverse the list, based on head and index*/
	while (temp && idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL && idx > 1)/*check for invalid index*/
		return (NULL);/*index doesn't exist*/
	/*other wise add node at possition of temp*/
	if (temp != NULL && temp->next != NULL && idx == 1)/*in between nodes*/
	{
		new_node->next = temp->next;
		temp->next->prev = new_node;
		temp->next = new_node;
		new_node->prev = temp; /*prev of temp*/
	}
	else if (temp == NULL && idx == 1)/*if it is the last node*/
	{
		new_node->prev = temp;
		temp->next = new_node;
		new_node->next = NULL;
		return (*h);
	}
	return (*h); /*return the head of the node or new node*/
}
