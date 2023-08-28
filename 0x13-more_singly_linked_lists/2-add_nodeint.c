#include "lists.h"
/**
 * add_nodeint - a fxn that adds a new node at the beginning of the list
 * @head: pointer to the head node
 * @n: the data to set to the new node to fix at the beginning
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create the new node*/
	listint_t *new_node = NULL;

	/**allocate space for new node*/
	new_node = malloc(sizeof(listint_t));

	/*set data value of new node*/
	new_node->n = n;

	/*set new_node to point what head is pointing to: head-link*/
	new_node->next = *head;
	/*set head to point to new node*/
	*head = new_node;

	/*return head*/
	return (*head);
}
