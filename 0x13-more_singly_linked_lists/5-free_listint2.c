#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/*create a pointer to the head*/
	listint_t *node_to_free = NULL;

	/*only check if head is not null before start to free*/
	if (*head != NULL)
	{
		/*if the head next or next node is not null,loop through/free*/
		while ((*head)->next != NULL)
		{
			/*set current node to be what head is pointing to*/
			node_to_free = *head;
			
			/*set head to point to next node*/
			*head = (*head)->next;
			
			/*free the curr node,what head was prev.pointing to*/
			free(node_to_free);
		}
		
		/*free head, last node*/
		free(*head);
	}

	/*set head to NULL*/
	*head = NULL;
}
