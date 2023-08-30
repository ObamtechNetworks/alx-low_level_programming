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
	listint_t *node_to_insert = NULL;/*create the new node*/
	/*create a pointer to the head for traversing to desired index*/
	listint_t *traverse_ptr = *head;
	/*allocate space for new node in memory*/
	node_to_insert = malloc(sizeof(listint_t));
	/*handle malloc failure*/
	if (node_to_insert == NULL)
		return (NULL);

	node_to_insert->n = n;/*set data value of new node*/	
	if (idx == 0)/*since index starts 0,set it to be the head*/
	{
		node_to_insert->next = *head;
		*head = node_to_insert;
		return (node_to_insert);
	}
	/*traverse the node down to the desired position, (before index)*/
	while (idx > 1 && traverse_ptr != NULL)
	{
		idx--;
		traverse_ptr = traverse_ptr->next;
	}
	if (idx > 1)
	{/*if after traversing to NULL,& index is still > 1,it's impossible*/
		free(node_to_insert);
		return (NULL);
	}
	/*update the link of new node to be link of traversed pointer*/
	node_to_insert->next = traverse_ptr->next;
	/*update the link of prev. node  to be new node's addr. i.e the head*/
	traverse_ptr->next = node_to_insert;

	if (traverse_ptr == NULL)/*this means node becomes the tail*/
		*head = node_to_insert;
	return (node_to_insert);/*return the new_node*/
}
