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
	dlistint_t *temp = NULL, *new_node = NULL;/*create the new node*/
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));/*alloc space for new node*/
	if (new_node == NULL || h == NULL) /*handle malloc return*/
		return (NULL);
	new_node->n = n; /*set the data part of new node*/
	if (*h == NULL && idx == 0) /*empty list*/
		*h = new_node;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		temp = *h;
		for (i = 0; i < idx - 1; ++i)
		{
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
			temp = temp->next;
		}
		new_node->next = temp->next;
		new_node->prev = temp; /*prev of temp*/
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node); /*return the head of the node or new node*/
}
