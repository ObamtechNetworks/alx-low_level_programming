#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head to delete
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	/*create int varaible to hold head node data*/
	int node_data;

	/*create a temporary pointer to hold what head is pointing to*/
	listint_t *node_to_delete;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	node_data = (*head)->n;

	/*move head to point to next pointer*/
	*head = (*head)->next;

	/*then free the old node*/
	free(node_to_delete);

	return (node_data);
}
