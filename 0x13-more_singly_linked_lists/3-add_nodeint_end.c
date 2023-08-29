#include "lists.h"
/**
 * add_nodeint_end - a fxn that adds a new node at the end of the list
 * @head: pointer to the head node
 * @n: the data to set to the new node to fix at the beginning
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*create the new node*/
	listint_t *new_node_end = NULL;
	/*create a pointer to head*/
	listint_t *head_ptr = *head;

	/**allocate space for new node*/
	new_node_end = malloc(sizeof(listint_t));
	/*handle malloc failure*/
	if (new_node_end == NULL)
		return (NULL);

	/*set data value of new node*/
	new_node_end->n = n;

	/*if head/head_ptr node is NULL, set it to be new_node*/
	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);/*return new_node*/
	}
	else
	{
		/*else traverse through the reference of head node to the end*/
		while (head_ptr->next != NULL)
		{
			/*set current head to be head next or reference of head*/
			/*thereby moving through the nodes, till null or last*/
			head_ptr = head_ptr->next;
		}
		/*now set the last node to the new_node*/
		head_ptr->next = new_node_end;
	}

	return (new_node_end);/*return new node*/
}
