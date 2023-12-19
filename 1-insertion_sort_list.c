#include "sort.h"

/**
 * insertion_sort_list - sort a list using insertion sort algorithm
 *
 * @list: targetetd list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *link, *current = *list;

	/* invalid pointer or empty list or less than 2 nodes */
	if (list == NULL || current == NULL || current->next == NULL)
		return;

	/* move the pointer to the second node */
	current = current->next;
	while (current)
	{
		link = current;
		while (link->prev && link->n < link->prev->n)
		{
			temp = link;
			if (link->next)
				link->next->prev = link->prev;
			link->prev->next = link->next;
			link = link->prev;
			temp->prev = link->prev;
			temp->next = link;
			if (link->prev)
				link->prev->next = temp;
			link->prev = temp;
			if (temp->prev == NULL) /* head node */
				*list = temp;
			link = link->prev;

			print_list(*list);
		}
		current = current->next;
	}
}

