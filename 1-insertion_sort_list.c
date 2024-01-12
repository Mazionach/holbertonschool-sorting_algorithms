#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *c_node, *node_2;

	if (!list || !(*list))
		return;

	node = *list;
	while (node)
	{
		c_node = node->prev;
		node_2 = node->next;
		while (c_node)
		{
			if (node->n < c_node->n)
			{
				if (*list == c_node)
					*list = node;

				if (c_node->prev)
					(c_node->prev)->next = node;

				if (node->next)
					(node->next)->prev = c_node;

				c_node->next = node->next;
				node->next = c_node;
				node->prev = c_node->prev;
				c_node->prev = node;

				print_list(*list);
				c_node = node->prev;
			}
			else
			{
				break;
			}
		}
		node = node_2;
	}
}

