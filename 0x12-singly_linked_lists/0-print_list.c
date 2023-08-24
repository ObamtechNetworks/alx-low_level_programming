#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all elements of a list
 * @h: a pointer to the list to print its element
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	/*create a count variable for number of nodes*/
	int count = 0;
	/*create a pointer that points to the link of h*/
	const list_t *ptr = NULL;

	ptr = h;
	/*loop through element of h while link is not NULL*/
	while (ptr != NULL)/*while first node is not NULL*/
	{
		/**check for NULL */
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;/*add one count*/
			ptr = ptr->next; /*move to next node*/
		}
		/*output the elements*/
		printf("[%d] %s\n", ptr->len, ptr->str);
		count++;/*count the nodes */
		ptr = ptr->next;/*point ddto the next node*/
	}
	/*return the number of nodes*/
	return (count);
}
