#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	/*create temporal next and current pointer*/
	dlistint_t *current = NULL;
	dlistint_t *next = NULL;
	/*attempt to free only when head is not NULL*/
	if (head)
	{
		current = head;
		while (current && current->next != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		free(current);
	}
}
