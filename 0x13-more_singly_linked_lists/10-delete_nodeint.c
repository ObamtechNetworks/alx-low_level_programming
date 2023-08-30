#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: the head node
 * @index: the index(position) to delete
 * Return: 1 if deletion was successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*create a pointer to head to traverse to index*/
	listint_t *node_to_del = *head;

	/*edge cases*/
	if (index == 0)/*this definitely is the head, so free head8*/
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (*head == NULL)/*empty node*/
		return (-1);

	/*traverse to index to retrieve node*/
	while (index > 1 && node_to_del != NULL)
	{
		index--;
		node_to_del = node_to_del->next;
	}
	/*if node is not found, return 1*/
	if (index > 1)
		return (-1);

	/*check if node_to_del is NULL already*/
	if (node_to_del == NULL)
		return (-1);

	/*delete the pointer*/
	free(node_to_del->next);/*free at memory*/
	free(node_to_del);/*free the node itself*/

	/*update prev.node to new node or delete space*/
	(*head)->next = NULL;

	return (1);/*returns 1 on success*/
}
