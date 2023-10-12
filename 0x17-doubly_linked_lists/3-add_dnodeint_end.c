#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: pointer to the head node
 * @n: the element to insert/add
 * Return: address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*creat a temp pointer*/
	dlistint_t *temp = NULL;
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
	new_node->next = NULL;
	/*CASE 1: if head is empty, set new_node to be head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/*CASE2: single node*/
	if (*head && (*head)->next == NULL)
	{
		new_node->prev = *head;
		(*head)->next = new_node;
		new_node->next = NULL;
		return (*head);
	}
	/*many nodes, we need to traverse the list to the end*/
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;
	/*update the pointers*/
	new_node->prev = temp;
	temp->next = new_node;
	new_node->next = NULL;
	return (*head);
}
