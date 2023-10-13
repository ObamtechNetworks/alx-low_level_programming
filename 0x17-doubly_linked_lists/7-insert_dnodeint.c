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

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));/*alloc space for new node*/
	if (new_node == NULL) /*handle malloc return*/
		return (NULL);
	new_node->n = n; /*set the data part of new node*/
	new_node->prev = NULL;/*set prev node of new node*/
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	while (temp && idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL && idx > 0)/*check for invalid index*/
		return (NULL);/*index doesn't exist*/
	if (temp && temp->next == NULL && idx == 1)/*jst two nodes*/
	{
		new_node->prev = temp;
		temp->next = new_node;
		new_node->next = NULL;
	}
	/*other wise add node at possition of temp*/
	if (temp != NULL && temp->next != NULL && idx == 1)/*in between nodes*/
	{
		new_node->next = temp->next;
		temp->next->prev = new_node;
		temp->next = new_node;
		new_node->prev = temp; /*prev of temp*/
	}
	return (*h); /*return the head of the node or new node*/
}
