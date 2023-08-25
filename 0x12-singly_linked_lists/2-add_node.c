#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - a function that adds new node at the beg of a list_t list
 * @head: a pointer to the first node
 * @str: the string to add to the beginning of the node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/*create the new node*/
	list_t *new_node;
	/*allocate space for new node in memory*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*set the values of elments of new node*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head; /*make link of new_node point to head*/

	/*set head to point to new_node*/
	*head = new_node;

	/*return new node if not null*/
	return (new_node);
}
