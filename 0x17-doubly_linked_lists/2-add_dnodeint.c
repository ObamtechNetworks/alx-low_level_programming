#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to the head node
 * @n: the element to insert/add
 * Return: address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create the new node*/
	dlistint_t *new_node = NULL;
	/*alloc memory for new node*/
	new_node = malloc(sizeof(dlistint_t));
	/*handle malloc failure*/
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n; /*update the data part of new node*/
	/*update the prev of new node to NULL*/
	new_node->prev = NULL;
	/*CASE 1: if head is empty, set new_node to be head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/*if head is not NULL, then we do the insertions*/
	/*point next of new node to head*/
	new_node->next = *head;
	/*prev of head to point to new_node*/
	(*head)->prev = new_node;
	/*update head to be the new node*/
	*head = new_node;
	/* return the new node*/
	return (new_node);
}
