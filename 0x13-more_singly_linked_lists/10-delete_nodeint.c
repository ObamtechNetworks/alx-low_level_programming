#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: the head node
 * @index: the index(position) to delete
 * Return: 1 if deletion was successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*create a pointer to head as prev node, and anoter as cur.node*/
	listint_t *prev_node = *head;/*pointer to the previous node*/
	listint_t *node_to_del = *head;/*the node to delete*/

	/*check if head is NULL*/
	if (*head == NULL)
		return (-1);/*empty nothing to free*/

	/*check if index is 0, so that is the head, then free it*/
	if (index == 0)
	{
		/*set head to point to next link of node to del*/
		*head = node_to_del->next;/*head points to next node*/
		free(node_to_del);/*free current head, (as node to del)*/
		node_to_del = NULL;/*set delete node to be NULL*/
		return (1);
	}
	/*if index is not 0 then traverse to the index*/
	while (index > 0 && node_to_del != NULL)
	{
		/*set previous node to be the node to del*/
		prev_node = node_to_del;
		node_to_del = node_to_del->next;/*move node to del to idx*/
		index--;/*decrement index as node will move to the position*/
	}
	if (index > 0)/*what to free is beyond the list*/
	{
		return (-1);
	}
	/*if node_to_del == NULL, nothing to delete, return -1*/
	if (node_to_del == NULL)
		return (-1);
	/*else, set prev_node link to next node of node to del*/
	prev_node->next = node_to_del->next;
	/*then delete the node to delete and set to NULL*/
	free(node_to_del);
	node_to_del = NULL;
	return (1);/*returns 1 on success*/
}
