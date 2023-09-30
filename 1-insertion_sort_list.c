#include "sort.h"

/**
 * swap_node - This program swaps node in a list
 * @first: This is the fist node
 * @sec: This is the second node
 * Return: void
 */
void swap_node(listint_t *first, listint_t *sec)
{
	if (first->prev)
		first->prev->next = sec;
	if (sec->next)
		sec->next->prev = sec;
	first->next = sec->next;
	sec->prev = first->prev;
	first->prev = sec;
	sec->next = first;

}

/**
 * insertion_sort_list - A function that sorts a doubly linked list
 * of integers in ascending order
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *s, *l;

	if (!list || !*list || !(*list)->next)
		return;
	s = (*list)->next;
	while (s)
	{
		l = s;
		l = s->next;
		while (l && l->prev)
		{
			if (l->prev->n > l->n)
			{
				swap_node(l->prev, l);
				if (!l->prev)
					*list = l;
				print_list((const listint_t *)*list);
			}
			else
        l= l->prev;
		}

	}
}