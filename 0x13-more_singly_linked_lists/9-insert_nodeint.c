#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index(position)
 * @head: the head node
 * @idx: the index(position) to add the new node
 * @n: the data or value to set for the new node
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*create the new node*/
	listint_t *node_to_insert = NULL;
	/*create a pointer to the head for traversing to desired index*/
	listint_t *traverse_ptr = *head;
	/*allocate space for new node in memory*/
	node_to_insert = malloc(sizeof(listint_t));
	/*handle malloc failure*/
	if (node_to_insert == NULL)
		return (NULL);

	node_to_insert->n = n;/*set data value of new node*/
	/*check if index is 0, then that's impossible return (NULL)*/
	if (idx == 0)
	{
		free(node_to_insert);
		return (NULL);
	}
	/*check if index is 1, then if true set it to be the head*/
	if (idx == 1)
	{
		node_to_insert->next = *head;
		*head = node_to_insert;
		return (node_to_insert);
	}
	/*traverse the node down to the desired position*/
	while (idx != 1 && traverse_ptr != NULL)
	{
		idx--;
		traverse_ptr = traverse_ptr->next;
	}
	if (traverse_ptr == NULL)/*if index is impossible, return NULL*/
	{
		free(node_to_insert);
		return (NULL);
	}
	/*update the link of new node to be link of traversed pointer*/
	node_to_insert->next = traverse_ptr->next;
	/*update the link of prev. node  to be new node's addr. i.e the head*/
	traverse_ptr->next = node_to_insert;
	return (node_to_insert);/*return the new_node*/
}
