#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - a function that adds new node at the end of a list
 * @head: a pointer to the first node
 * @str: the string to add to the end of the node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*create the new node*/
	list_t *new_node_end;
	list_t *traverse;/*to traverse the list till NULL*/
	/*allocate space for new node in memory*/
	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);

	/*set the values of elments of new node*/
	new_node_end->str = strdup(str);
	new_node_end->len = strlen(str);
	new_node_end->next =  NULL;

	/*set head to new node if head is NULL*/
	if (*head == NULL)
		*head = new_node_end;
	else
	{
		/*else traverse throught the node till you find the end*/
		traverse = *head;
		while (traverse->next != NULL)
		{
			traverse = traverse->next;/*keep moving till the end of list*/
		}
	}
	/*set the last NODE TO NEW NODE*/
	traverse->next = new_node_end;
	new_node_end->next = NULL;

	/*return new node if not null*/
	return (new_node_end);
}
