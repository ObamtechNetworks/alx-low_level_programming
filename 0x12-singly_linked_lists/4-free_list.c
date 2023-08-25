#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a linked list
 * @head: a pointer to the list to print its element
 * Return: nothing
 */
void free_list(list_t *head)
{
	/*while head is not NULL, free all other linked list*/
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
