#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	/*create a pointer to the head*/
	listint_t *curr_node = NULL;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			curr_node = head;
			head = head->next;
			free(curr_node);
		}
		free(head);
	}

}
