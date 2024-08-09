#include "sort.h"

/**
 * insertion_sort_list - function which will sort in with -
 * - insertion method
 *   @list: List of the nodes
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *node;

	if (list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node != NULL)
	{
		temp = node->prev;
		while (temp != NULL && node->n < temp->n)
		{
			if (temp->prev != NULL)
				temp->prev->next = node;
			else
			{
				*list = node;
			}
			if (node->next != NULL)
				node->next->prev = temp;
			node->prev = temp->prev;
			temp->next = node->next;
			node->next = temp;
			temp->prev = node;
			temp = node->prev;
			print_list(*list);
		}
		node = node->next;
	}
}
